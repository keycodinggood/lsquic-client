/* Copyright (c) 2017 - 2018 LiteSpeed Technologies Inc.  See LICENSE. */
#ifndef LSQUIC_SIZES_H
#define LSQUIC_SIZES_H 1

#define IQUIC_SRESET_TOKEN_SZ 16u

#define IQUIC_MIN_SRST_SIZE (1 /* Type */ + 20 /* Random bytes */ \
                                        + IQUIC_SRESET_TOKEN_SZ /* Token */)

#endif