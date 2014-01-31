/*
 * @@PROJECT_NAME
 *
 * Alistair King, CAIDA, UC San Diego
 * corsaro-info@caida.org
 *
 * Copyright (C) 2012 The Regents of the University of California.
 *
 * This file is part of @@PROJECT_NAME.
 *
 * @@PROJECT_NAME is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * @@PROJECT_NAME is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with @@PROJECT_NAME.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __HELLO_H
#define __HELLO_H

#include <stdint.h>
#include <wandio.h>

/** @file
 *
 * @brief Header file that exposes the public interface of hello.
 *
 * @author Alistair King
 *
 */

/**
 * @name Public Opaque Data Structures
 *
 * @{ */



/** @} */

/**
 * @name Public Data Structures
 *
 * @{ */



/** @} */

/**
 * @name Public Enums
 *
 * @{ */



/** @} */

/** Print a hello greeting using the name given
 *
 * @param name          Pointer to an array of characters to use as the name
 * @return 0 if successful, -1 if an error occurred
 */
int hello_greet_by_name(const char *name);

#endif /* __HELLO_H */
