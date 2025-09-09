/**
 * This file is part of Hercules.
 * http://herc.ws - http://github.com/HerculesWS/Hercules
 *
 * Copyright (C) 2025 Hercules Dev Team
 * Copyright (C) 2025 Lorenzo Buitizon (MrKeiKun)
 *
 * Hercules is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#define HERCULES_CORE

#include "regex.h"

/**
 * interface sources
 **/
static struct pcre_interface libpcre_s;
struct pcre_interface* libpcre;

#ifdef HAVE_PCRE2
/* Define PCRE functions for PCRE2 */
static pcre *pcre_compile(const char *pattern, int options, const char **errptr, int *erroffset, const unsigned char *tableptr)
{
    int errorcode;
    PCRE2_SIZE erroroffset2;
    pcre *code = (pcre *)pcre2_compile((PCRE2_SPTR)pattern, PCRE2_ZERO_TERMINATED, options, &errorcode, &erroroffset2, NULL);
    if (errptr)
        *errptr = (const char *)pcre2_get_error_message(errorcode, NULL);
    if (erroffset)
        *erroffset = (int)erroroffset2;
    return code;
}

static pcre_extra *pcre_study(const pcre *code, int options, const char **errptr)
{
    return NULL;
}

static int pcre_exec(const pcre *code, const pcre_extra *extra, PCRE_SPTR subject, int length, int startoffset, int options, int *ovector, int ovecsize)
{
    return pcre2_match((pcre2_code *)code, (PCRE2_SPTR)subject, length, startoffset, options, (pcre2_match_data *)extra, NULL);
}

static void pcre_free(void *ptr)
{
    pcre2_code_free((pcre2_code *)ptr);
}

static int pcre_copy_substring(const char *subject, int *ovector, int stringcount, int stringnumber, char *buffer, int buffersize)
{
    return pcre2_substring_copy_bynumber(NULL, (PCRE2_SPTR)subject, ovector, stringcount, stringnumber, (PCRE2_UCHAR*)buffer, (PCRE2_SIZE)buffersize);
}

static void pcre_free_substring(const char *stringptr)
{
    /* No-op in PCRE2 */
}

static int pcre_copy_named_substring(const pcre *code, const char *subject, int *ovector, int stringcount, const char *stringname, char *buffer, int buffersize)
{
    return pcre2_substring_copy_byname(NULL, (PCRE2_SPTR)subject, ovector, stringcount, (PCRE2_SPTR)stringname, (PCRE2_UCHAR*)buffer, (PCRE2_SIZE)buffersize);
}

static int pcre_get_substring(const char *subject, int *ovector, int stringcount, int stringnumber, const char **stringptr)
{
    return pcre2_substring_get_bynumber(NULL, (PCRE2_SPTR)subject, ovector, stringcount, stringnumber, (PCRE2_UCHAR**)stringptr);
}

#endif

#if !defined(HAVE_PCRE) && !defined(HAVE_PCRE2)
/* Dummy functions when PCRE is not configured */
static pcre *pcre_compile(const char *pattern, int options, const char **errptr, int *erroffset, const unsigned char *tableptr)
{
    return NULL;
}

static pcre_extra *pcre_study(const pcre *code, int options, const char **errptr)
{
    return NULL;
}

static int pcre_exec(const pcre *code, const pcre_extra *extra, PCRE_SPTR subject, int length, int startoffset, int options, int *ovector, int ovecsize)
{
    return -1;
}

static void pcre_free(void *ptr)
{
}

static int pcre_copy_substring(const char *subject, int *ovector, int stringcount, int stringnumber, char *buffer, int buffersize)
{
    return -1;
}

static void pcre_free_substring(const char *stringptr)
{
}

static int pcre_copy_named_substring(const pcre *code, const char *subject, int *ovector, int stringcount, const char *stringname, char *buffer, int buffersize)
{
    return -1;
}

static int pcre_get_substring(const char *subject, int *ovector, int stringcount, int stringnumber, const char **stringptr)
{
    return -1;
}
#endif

void regex_defaults(void)
{
	libpcre = &libpcre_s;

	libpcre->compile = pcre_compile;
	libpcre->study = pcre_study;
	libpcre->exec = pcre_exec;
	libpcre->free = pcre_free;
	libpcre->copy_substring = pcre_copy_substring;
	libpcre->free_substring = pcre_free_substring;
	libpcre->copy_named_substring = pcre_copy_named_substring;
	libpcre->get_substring = pcre_get_substring;
}
