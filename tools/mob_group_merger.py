#
# This file is part of Hercules.
# http://herc.ws - http://github.com/HerculesWS/Hercules
#
# Copyright (C) 2025 Hercules Dev Team
# Copyright (C) 2025 Lorenzo Buitizon (MrKeiKun)
#
# Hercules is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

import re

def parse_mob_groups(group_file_path):
    """Parse mob group configuration file and return dict of monster -> [(group, rate), ...]"""
    groups = {}
    with open(group_file_path, 'r') as f:
        content = f.read()

    # Split by group definitions
    parts = re.split(r'(\w+):\s*\(\s*', content)
    for i in range(1, len(parts), 2):
        group_name = parts[i]
        monsters_content = parts[i+1]
        # Extract monsters up to the last )
        end = monsters_content.rfind(')')
        if end != -1:
            monsters_content = monsters_content[:end+1]
        # Find all monsters in this group
        for match in re.finditer(r'\("([^"]+)",\s*(\d+)\)', monsters_content):
            monster_name, rate = match.groups()
            groups.setdefault(monster_name, []).append((group_name, rate))
    return groups

def add_summon_block(lines, sprite, groups):
    """Add Summon block after Drops for given sprite"""
    for i, line in enumerate(lines):
        if f'SpriteName: "{sprite}"' in line:
            # Find Drops block
            j = i + 1
            while j < len(lines) and 'Drops:' not in lines[j]:
                j += 1
            if j < len(lines):
                # Find end of Drops block
                k = j
                brace_count = 0
                while k < len(lines):
                    brace_count += lines[k].count('{') - lines[k].count('}')
                    if brace_count <= 0:
                        break
                    k += 1
                # Insert Summon block
                summon_lines = [f'\tSummon: {{\n']
                for group, rate in groups[sprite]:
                    summon_lines.append(f'\t\t{group}: {rate}\n')
                summon_lines.append('\t}\n')
                lines[k+1:k+1] = summon_lines
                return True
    return False

def process_version(version):
    """Process a single version (pre-re, re, or empty for root db/)"""
    if version:
        base_path = f'../db/{version}'
        group_file = f'{base_path}/mob_group.conf'
        db_file = f'{base_path}/mob_db.conf'
    else:
        base_path = '../db'
        group_file = f'{base_path}/mob_group2.conf'
        db_file = f'{base_path}/mob_db2.conf'

    groups = parse_mob_groups(group_file)

    with open(db_file, 'r') as f:
        lines = f.readlines()

    # Process each monster in groups
    for sprite in groups:
        add_summon_block(lines, sprite, groups)

    # Write back
    with open(db_file, 'w') as f:
        f.writelines(lines)

    print(f"Merged Summon data into {db_file}")

def main():
    process_version('pre-re')
    process_version('re')
    process_version('')  # For mob_db2.conf and mob_group2.conf in root db/

if __name__ == "__main__":
    main()
