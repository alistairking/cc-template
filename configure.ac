#
# @@PROJECT_NAME
#
# Alistair King, CAIDA, UC San Diego
# corsaro-info@caida.org
#
# Copyright (C) 2012 The Regents of the University of California.
#
# This file is part of @@PROJECT_NAME.
#
# @@PROJECT_NAME is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# @@PROJECT_NAME is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with @@PROJECT_NAME.  If not, see <http://www.gnu.org/licenses/>.
#

## @@ replace all instancnes of "hello" with project name e.g. "corsaro"
AC_INIT([hello], [0.0.0], [corsaro-info@caida.org])

# The following define the version numbers for the libtool-created library
# (libhello), and not for the overall package. The package version (above)
# should use semantic versioning, for more info on the library versioning, see
# https://www.sourceware.org/autobook/autobook/autobook_91.html

HELLO_MAJOR_VERSION=0
HELLO_MID_VERSION=0
HELLO_MINOR_VERSION=0

AC_DEFINE_UNQUOTED([HELLO_MAJOR_VERSION],$HELLO_MAJOR_VERSION,
	[hello major version])
AC_DEFINE_UNQUOTED([HELLO_MID_VERSION],$HELLO_MID_VERSION,
	[hello mid version])
AC_DEFINE_UNQUOTED([HELLO_MINOR_VERSION],$HELLO_MINOR_VERSION,
	[hello minor version])


## @@do not touch unless you know what you are doing
LT_INIT
AM_INIT_AUTOMAKE
AC_CONFIG_MACRO_DIR([m4])
# Checks for programs.
AC_PROG_LIBTOOL
AC_PROG_CXX
AM_PROG_LIBTOOL
AC_PROG_CC_C99
AC_CONFIG_HEADERS([config.h])


# @@change to the main code file
AC_CONFIG_SRCDIR([lib/hello.c])


## @@ do not touch unless you know what you are doing
AC_SYS_LARGEFILE
AH_VERBATIM([_GNU_SOURCE],
[/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif])


## @@add functions here
#AC_CHECK_FUNCS([])


## @@ do not touch unless you know what you are doing
# should we dump debug output to stderr and not optmize the build?
AC_MSG_CHECKING([whether to build with debug information])
AC_ARG_ENABLE([debug],
    [AS_HELP_STRING([--enable-debug],
        [enable debug data generation (def=no)])],
    [debugit="$enableval"],
    [debugit=no])
AC_MSG_RESULT([$debugit])
if test x"$debugit" = x"yes"; then
    AC_DEFINE([DEBUG],[],[Debug Mode])
else
    AC_DEFINE([NDEBUG],[],[No-debug Mode])
fi

## @@ do not touch unless you know what you are doing
# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_TYPE_UINT8_T
# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_REALLOC

# Checks for libraries.
# please use libwandio for threaded IO
## @@remove if no file IO needed
AC_SEARCH_LIBS([wandio_create], [wandio trace], with_wandio=yes,
               [AC_MSG_ERROR(
	         [libwandio required (included with libtrace since 3.0.15)]
	       )])
AM_CONDITIONAL([WITH_WANDIO], [test x$with_wandio = xyes])

## @@ add more AC_CHECK_LIB / AC_SEARCH_LIBS calls here for needed libraries

## @note AC_CHECK_LIB is for when you know the name of the library,
## AC_SEARCH_LIBS is when you need to determine the library that a specific
## function is in. For example, above we use AC_SEARCH_LIBS to find the
## wandio_create function as it may be in either the libtrace or libwandio
## libraries depending on the version of libtrace in use.

#AC_CHECK_LIB([trace], [trace_get_payload_length], ,[AC_MSG_ERROR(
#		      [libtrace >= 3.0.8 required])])

# Checks for header files.
## @@edit as needed
AC_CHECK_HEADERS([inttypes.h limits.h math.h stdlib.h string.h time.h sys/time.h])

## @@ do not touch unless you know what you are doing
AC_HEADER_ASSERT

## @@ replace with variable names defined at the top
AC_SUBST([HELLO_MAJOR_VERSION])
AC_SUBST([HELLO_MID_VERSION])
AC_SUBST([HELLO_MINOR_VERSION])

## @@add any additional Makefile.am files needed. e.g. if subdirs created in lib
AC_CONFIG_FILES([Makefile
		common/Makefile
                common/libinterval3/Makefile
                common/libinterval3/rb_tree/Makefile
		common/libpatricia/Makefile
		common/libcsv/Makefile
		lib/Makefile
		tools/Makefile
		])
AC_OUTPUT
