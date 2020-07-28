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

#ifndef CONN_H
#define CONN_H

#include <netdb.h>

#define PROTO_SECURE_MASK (1 << 0) /* bit 0 - 0 = insecure, 1 = secure */
#define PROTO_PROTO_MASK (1 << 1) /* bit 1 = 0 = ftp,      1 = http   */

#define PROTO_INSECURE (0 << 0)
#define PROTO_SECURE (1 << 0)
#define PROTO_PROTO_FTP (0 << 1)
#define PROTO_PROTO_HTTP (1 << 1)

#define PROTO_IS_FTP(proto) (((proto)&PROTO_PROTO_MASK) == PROTO_PROTO_FTP)
#define PROTO_IS_SECURE(proto) (((proto)&PROTO_SECURE_MASK) == PROTO_SECURE)

#define PROTO_FTP (PROTO_PROTO_FTP | PROTO_INSECURE)
#define PROTO_FTP_PORT 21

#define PROTO_FTPS (PROTO_PROTO_FTP | PROTO_SECURE)
#define PROTO_FTPS_PORT 990

#define PROTO_HTTP (PROTO_PROTO_HTTP | PROTO_INSECURE)
#define PROTO_HTTP_PORT 80

#define PROTO_HTTPS (PROTO_PROTO_HTTP | PROTO_SECURE)
#define PROTO_HTTPS_PORT 443

#define PROTO_DEFAULT PROTO_HTTP
#define PROTO_DEFAULT_PORT PROTO_HTTP_PORT

typedef struct {
        /* Host */
        /* Port */
        /* Protocol */
} conn_t;

#endif /* CONN_H */
