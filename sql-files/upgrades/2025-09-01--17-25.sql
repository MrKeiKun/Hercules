#1725211525

-- This file is part of Hercules.
-- http://herc.ws - http://github.com/HerculesWS/Hercules
--
-- Copyright (C) 2025 Hercules Dev Team
--
-- Hercules is free software: you can redistribute it and/or modify
-- it under the terms of the GNU General Public License as published by
-- the Free Software Foundation, either version 3 of the License, or
-- (at your option) any later version.
--
-- This program is distributed in the hope that it will be useful,
-- but WITHOUT ANY WARRANTY; without even the implied warranty of
-- MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
-- GNU General Public License for more details.
--
-- You should have received a copy of the GNU General Public License
-- along with this program.  If not, see <http://www.gnu.org/licenses/>.

-- MySQL 8.x Compatibility and Performance Improvements

-- Convert critical tables to InnoDB for better performance and ACID compliance
-- InnoDB is the default storage engine in MySQL 8.x and provides better concurrency

-- Convert login table to InnoDB (critical for authentication)
ALTER TABLE `login` ENGINE=InnoDB;

-- Convert character tables to InnoDB
ALTER TABLE `char` ENGINE=InnoDB;
ALTER TABLE `char_reg_num_db` ENGINE=InnoDB;
ALTER TABLE `char_reg_str_db` ENGINE=InnoDB;

-- Convert inventory and storage tables to InnoDB
ALTER TABLE `inventory` ENGINE=InnoDB;
ALTER TABLE `cart_inventory` ENGINE=InnoDB;
ALTER TABLE `storage` ENGINE=InnoDB;
ALTER TABLE `guild_storage` ENGINE=InnoDB;

-- Convert mail system to InnoDB
ALTER TABLE `mail` ENGINE=InnoDB;

-- Convert auction system to InnoDB
ALTER TABLE `auction` ENGINE=InnoDB;

-- Convert party and guild systems to InnoDB
ALTER TABLE `party` ENGINE=InnoDB;
ALTER TABLE `guild` ENGINE=InnoDB;
ALTER TABLE `guild_member` ENGINE=InnoDB;
ALTER TABLE `guild_alliance` ENGINE=InnoDB;
ALTER TABLE `guild_expulsion` ENGINE=InnoDB;
ALTER TABLE `guild_position` ENGINE=InnoDB;
ALTER TABLE `guild_skill` ENGINE=InnoDB;
ALTER TABLE `guild_castle` ENGINE=InnoDB;

-- Convert pet and homunculus systems to InnoDB
ALTER TABLE `pet` ENGINE=InnoDB;
ALTER TABLE `homunculus` ENGINE=InnoDB;
ALTER TABLE `homunculus_skill` ENGINE=InnoDB;
ALTER TABLE `elemental` ENGINE=InnoDB;
ALTER TABLE `mercenary` ENGINE=InnoDB;
ALTER TABLE `mercenary_owner` ENGINE=InnoDB;

-- Convert quest and achievement systems to InnoDB
ALTER TABLE `quest` ENGINE=InnoDB;
ALTER TABLE `char_achievements` ENGINE=InnoDB;

-- Convert autotrade system to InnoDB
ALTER TABLE `autotrade_data` ENGINE=InnoDB;
ALTER TABLE `autotrade_merchants` ENGINE=InnoDB;

-- Convert hotkey system to InnoDB
ALTER TABLE `hotkey` ENGINE=InnoDB;

-- Keep some tables as MyISAM for performance reasons (read-heavy, less critical)
-- These tables are primarily read and don't require ACID transactions
-- ipbanlist (already InnoDB)
-- friends
-- memo
-- sc_data
-- skill
-- npc_market_data
-- npc_barter_data
-- npc_expanded_barter_data
-- adventurer_agency
-- emotes
-- hotkeys

-- Ensure proper character set for MySQL 8.x compatibility
-- MySQL 8.x has better Unicode support with utf8mb4
ALTER TABLE `login` CONVERT TO CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
ALTER TABLE `char` CONVERT TO CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
ALTER TABLE `guild` CONVERT TO CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
ALTER TABLE `party` CONVERT TO CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
ALTER TABLE `mail` CONVERT TO CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
ALTER TABLE `auction` CONVERT TO CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;

-- Add indexes for better performance in MySQL 8.x
-- These indexes will help with common query patterns
CREATE INDEX IF NOT EXISTS idx_char_account_id ON `char` (`account_id`);
CREATE INDEX IF NOT EXISTS idx_char_online ON `char` (`online`);
CREATE INDEX IF NOT EXISTS idx_inventory_char_id ON `inventory` (`char_id`);
CREATE INDEX IF NOT EXISTS idx_cart_inventory_char_id ON `cart_inventory` (`char_id`);
CREATE INDEX IF NOT EXISTS idx_storage_account_id ON `storage` (`account_id`);
CREATE INDEX IF NOT EXISTS idx_guild_storage_guild_id ON `guild_storage` (`guild_id`);
CREATE INDEX IF NOT EXISTS idx_mail_send_id ON `mail` (`send_id`);
CREATE INDEX IF NOT EXISTS idx_mail_dest_id ON `mail` (`dest_id`);
CREATE INDEX IF NOT EXISTS idx_auction_seller_id ON `auction` (`seller_id`);
CREATE INDEX IF NOT EXISTS idx_auction_buyer_id ON `auction` (`buyer_id`);

-- Optimize table statistics for MySQL 8.x query optimizer
ANALYZE TABLE `login`, `char`, `inventory`, `cart_inventory`, `storage`, `guild_storage`, `mail`, `auction`, `party`, `guild`, `guild_member`;

INSERT INTO `sql_updates` (`timestamp`) VALUES (1725211525);