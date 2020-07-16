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

#ifndef CONF_H
#define CONF_H

#define DEFAULT_CONN_NUM 4
#define DEFAULT_MAX_REDIRECT 20

typedef struct {
        int max_redirect_times;
        int connection_num;
} conf_t;

int conf_init(conf_t *conf);
int conf_getopt(conf_t *conf, int argc, char *const *argv);
void conf_free(conf_t *conf);

#endif /* CONF_H */