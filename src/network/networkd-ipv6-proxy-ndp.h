/* SPDX-License-Identifier: LGPL-2.1-or-later */
#pragma once

#include "conf-parser.h"

typedef struct Link Link;

int link_set_ipv6_proxy_ndp_addresses(Link *link);
int link_ipv6_proxy_ndp_address_dump(Link *link);

CONFIG_PARSER_PROTOTYPE(config_parse_ipv6_proxy_ndp_address);
