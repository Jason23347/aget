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

#include <stdio.h>
#include <stdlib.h>

#include "options.h"
#include "conf.h"

struct option options[] = {
	{ "help", no_argument, NULL, 'h' },
	{ "version", no_argument, NULL, 'v' },
	{ "max-redirect", required_argument, NULL, 'r' },
	{ 0, 0, NULL, 0 },
};

/**
 * Read options from arguments
 * @returns 0 if OK, negative on errors.
 */
int
conf_getopt(conf_t *conf, int argc, char *const *argv)
{
	int opt;
	for (int i;
	     (opt = getopt_long(argc, argv, OPTSTRING, options, &i)) != -1;) {
		switch (opt) {
		case 'r':
			conf->max_redirect_times = atoi(optarg);
			/* TODO Macro for debug mode */
			fprintf(stderr, "max redirect times: %d\n",
				conf->max_redirect_times);
			break;
		case 'v':
			print_version();
			return -1;
		case 'h':
		default:
			print_help();
			return -1;
		}
	}

	return 0;
}

void
print_help()
{
	fprintf(stderr,
		"%s (%s)\n"
		"Usage: %s [options] URL\n\n"
		"--help\t\t-h\tPrint help info\n"
		"--version\t\t-v\tPrint version info\n"
		"\n"
		"To report bugs please visit:\n%s\n",
		PACKAGE_STRING, ARCH, PACKAGE_NAME, PACKAGE_BUGREPORT);
}

void
print_version()
{
	printf("%s (%s)\n\n"
	       "Copyright (C)\t2020\t\tJason\n",
	       PACKAGE_STRING, ARCH);
}
