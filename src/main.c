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

#include "config.h"

#include <stdio.h>
#include <getopt.h>
#include "aget.h"

int
main(int argc, char *const *argv)
{
	char opt;
	int ret;
	conf_t conf[1];
        aget_t aget[1];

        /* At least 1 argument (URL) */
	if (argc < 2) {
		print_help();
		return 1;
	}

        /* Deal with options */
	if (conf_getopt(conf, argc, argv) < 0) {
		return 1;
	}

        /* No URL specified */
	if (argc == optind) {
		print_help();
		return 1;
	}

        /* Deal with information in URL */

        /* Aget init */

        /* Start to download */

        /* Cleanups */
        conf_free(conf);
        aget_free(aget);

	return 0;
}
