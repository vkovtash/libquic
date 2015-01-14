/* Copyright (c) 2014, Google Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */

#include <openssl/err.h>

#include <openssl/conf.h>

const ERR_STRING_DATA CONF_error_string_data[] = {
  {ERR_PACK(ERR_LIB_CONF, CONF_F_CONF_parse_list, 0), "CONF_parse_list"},
  {ERR_PACK(ERR_LIB_CONF, CONF_F_NCONF_load, 0), "NCONF_load"},
  {ERR_PACK(ERR_LIB_CONF, CONF_F_def_load_bio, 0), "def_load_bio"},
  {ERR_PACK(ERR_LIB_CONF, CONF_F_str_copy, 0), "str_copy"},
  {ERR_PACK(ERR_LIB_CONF, 0, CONF_R_LIST_CANNOT_BE_NULL), "LIST_CANNOT_BE_NULL"},
  {ERR_PACK(ERR_LIB_CONF, 0, CONF_R_MISSING_CLOSE_SQUARE_BRACKET), "MISSING_CLOSE_SQUARE_BRACKET"},
  {ERR_PACK(ERR_LIB_CONF, 0, CONF_R_MISSING_EQUAL_SIGN), "MISSING_EQUAL_SIGN"},
  {ERR_PACK(ERR_LIB_CONF, 0, CONF_R_NO_CLOSE_BRACE), "NO_CLOSE_BRACE"},
  {ERR_PACK(ERR_LIB_CONF, 0, CONF_R_UNABLE_TO_CREATE_NEW_SECTION), "UNABLE_TO_CREATE_NEW_SECTION"},
  {ERR_PACK(ERR_LIB_CONF, 0, CONF_R_VARIABLE_HAS_NO_VALUE), "VARIABLE_HAS_NO_VALUE"},
  {0, NULL},
};