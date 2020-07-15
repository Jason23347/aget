
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

#define SHORT_OPT ""

#ifdef HAVE_GETOPT_LONG
#define LONG_OPT ""
struct option options[] = {
	{ "help", no_argument, NULL, 'h' },
	{ "version", no_argument, NULL, 'v' },
	{ "max-redirect", required_argument, NULL, 'r' },
};
#else
#define LONG_OPT "hvr:"
#define getopt_long(a, b, c, d, e) getopt(a, b, c)
#endif

static inline void
print_help()
{
	fprintf(stderr,
		"%s (%s)\n"
		"Usage: %s [options] URL\n\n"
		"--version\t\t-v\tPrint version info\n"
		"\n"
		"To report bugs please visit:\n%s\n",
		PACKAGE_STRING, ARCH, PACKAGE_NAME, PACKAGE_BUGREPORT);
}

static inline void
print_version()
{
	printf("%s (%s)\n\n"
	       "Copyright (C)\t2020\t\tJason\n",
	       PACKAGE_STRING, ARCH);
}

int
main(int argc, char *const *argv)
{
	char opt;

	if (argc < 2) {
		print_help();
		return 1;
	}

	for (int i; (opt = getopt_long(argc, argv, SHORT_OPT LONG_OPT, options,
				       &i)) != -1;) {
		switch (opt) {
		case 'r':
			fprintf(stderr, "max redirect times: %s\n", optarg);
			break;
		case 'v':
			print_version();
			return 0;
		case 'h':
		default:
			print_help();
			return 1;
		}
	}

	fprintf(stderr, "optind = %d\n", optind);
	if (argc == optind) {
		print_help();
		return 1;
	}

	return 0;
}
