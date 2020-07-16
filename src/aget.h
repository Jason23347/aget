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

#ifndef AGET_H
#define AGET_H

#include "conn.h"
#include "conf.h"

typedef struct {
	const conf_t *conf; /* Config struct */
	conn_t *conn; /* Connections */
} aget_t;

int aget_init(aget_t *aget, const conf_t *conf);
void aget_free(aget_t *aget);

#endif /* AGET_H */
