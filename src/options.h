/*
    Aget - A Simple CLI downloader
    Copyright (C) 2020  Jason

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef OPTIONS_H
#define OPTIONS_H

#include "config.h"

#include <getopt.h>

#define OPTSTRING "hvr:"

#ifndef HAVE_GETOPT_LONG
#define getopt_long(a, b, c, d, e) getopt(a, b, c)
#endif

void print_help();
void print_version();

#endif /* OPTIONS_H */
