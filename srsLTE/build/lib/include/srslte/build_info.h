/**
 *
 * \section COPYRIGHT
 *
 * Copyright 2013-2015 Software Radio Systems Limited
 *
 * \section LICENSE
 *
 * This file is part of the srsLTE library.
 *
 * srsLTE is free software: you can redistribute it and/or modify

 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * srsLTE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * A copy of the GNU Affero General Public License can be found in
 * the LICENSE file in the top-level directory of this distribution
 * and at http://www.gnu.org/licenses/.
 *
 */

#ifndef BUILD_INFO_
#define BUILD_INFO_

# ifdef __cplusplus
extern "C" {
# endif

#ifdef NDEBUG
    static char build_mode[] = "Release";
#else
    static char build_mode[] = "Debug";
#endif

// the configured build options for srsLTE
static char build_info[] = "commit 67562f2 on branch master";

SRSLTE_API char* srslte_get_build_info() {
  return build_info;
};

SRSLTE_API char* srslte_get_build_mode() {
  return build_mode;
}

# ifdef __cplusplus
}
# endif

#endif // BUILD_INFO_
