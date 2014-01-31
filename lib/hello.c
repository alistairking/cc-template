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

#include "config.h"

#include <assert.h>
#include <stdio.h>

#include "hello_int.h"

#define NAME_MAX_CHARS 128

static void start_greeting()
{
  fprintf(stdout, "Hello ");
}

static void finish_greeting()
{
  fprintf(stdout, ", nice to meet you!\n");
}

/* ---------- PUBLIC FUNCTIONS BELOW HERE ---------- */

int hello_greet_by_name(const char *name)
{
  assert(name != NULL);
  assert(strnlen(name, NAME_MAX_CHARS) > 0);

  start_greeting();
  fprintf(stdout, "%s", name);
  finish_greeting();

  return 0;
}
