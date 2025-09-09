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
#ifndef COMMON_REGEX_H
#define COMMON_REGEX_H

#include "common/hercules.h"

/**
 * @file common/regex.h
 * @brief Abstraction layer for PCRE and PCRE2 support with regex interface
 *
 * This header provides a unified interface for using either PCRE or PCRE2
 * libraries, allowing the codebase to support both versions transparently.
 * It also includes the regex interface for NPC chat pattern matching.
 *
 * Configuration:
 * - Define HAVE_PCRE to use PCRE (legacy)
 * - Define HAVE_PCRE2 to use PCRE2
 * - Default: No PCRE support (empty) - requires explicit configuration
 */

#ifdef HAVE_PCRE
#ifdef _MSC_VER
#include "../3rdparty/pcre/include/pcre.h"
#else
#include <pcre.h>
#endif

/* PCRE types are defined in pcre.h */

/* PCRE abstraction (legacy) */
typedef pcre *pcre_code_t;
typedef int pcre_match_data_t; /* PCRE doesn't have a separate match data type */

/* PCRE functions are declared in pcre.h */

/* Ensure PCRE constants are defined */
#ifndef PCRE_CASELESS
#define PCRE_CASELESS 0x0001
#endif
#ifndef PCRE_ERROR_NOMATCH
#define PCRE_ERROR_NOMATCH -1
#endif

#define pcre_free_match_data(match_data) /* No-op for PCRE */

#elif defined(HAVE_PCRE2)
#include <pcre2.h>

/* PCRE2 abstraction */
typedef pcre2_code *pcre_code_t;
typedef pcre2_match_data *pcre_match_data_t;

/* Define legacy types for compatibility */
typedef pcre2_code pcre;
typedef pcre2_match_data pcre_extra;
typedef PCRE2_SPTR PCRE_SPTR;

/* Define legacy constants for compatibility */
#define PCRE_CASELESS PCRE2_CASELESS
#define PCRE_ERROR_NOMATCH PCRE2_ERROR_NOMATCH

/* PCRE2 wrapper functions are defined in regex.c */

#define pcre_free_match_data(match_data) pcre2_match_data_free(match_data)

#else
/* Default: Provide basic type definitions for compatibility when PCRE is not configured */
/* This allows compilation but disables actual PCRE functionality */

typedef void *pcre;
typedef void *pcre_extra;
typedef const char *PCRE_SPTR;

/* Dummy functions are defined in regex.c */
#define pcre_free_match_data(match_data) ((void)0)

/* Dummy constants */
#define PCRE_CASELESS 0x0001
#define PCRE_ERROR_NOMATCH -1

#endif

/**
 * pcre interface (libpcre)
 * so that plugins may share and take advantage of the core's pcre
 * should be moved into core/perhaps its own file once hpm is enhanced for login/char
 **/
struct pcre_interface {
	pcre *(*compile) (const char *pattern, int options, const char **errptr, int *erroffset, const unsigned char *tableptr);
	pcre_extra *(*study) (const pcre *code, int options, const char **errptr);
	int (*exec) (const pcre *code, const pcre_extra *extra, PCRE_SPTR subject, int length, int startoffset, int options, int *ovector, int ovecsize);
	void (*free) (void *ptr);
	int (*copy_substring) (const char *subject, int *ovector, int stringcount, int stringnumber, char *buffer, int buffersize);
	void (*free_substring) (const char *stringptr);
	int (*copy_named_substring) (const pcre *code, const char *subject, int *ovector, int stringcount, const char *stringname, char *buffer, int buffersize);
	int (*get_substring) (const char *subject, int *ovector, int stringcount, int stringnumber, const char **stringptr);
};

/**
 * Also defaults libpcre
 **/
#ifdef HERCULES_CORE
void regex_defaults(void);
#endif // HERCULES_CORE

HPShared struct pcre_interface *libpcre;

#endif /* COMMON_REGEX_H */
