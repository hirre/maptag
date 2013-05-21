/*
 *  Flags.h
 *
 *  Flags used by maptag.
 *
 *  Created on: 15 maj 2013
 *  Author: Hirad Asadi
 *  E-mail: hirad.asadi@gmail.com
 *
 *  Copyright (C) 2013  Hirad Asadi
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FLAGS_HPP_
#define FLAGS_HPP_

// Flags
namespace maptag
{
enum Flag
{
    ALL,
    TAG,
    REMOVE_TAG,
    SHOW_TAG,
    WRITE_KEY_VALUE,
    DELETE_KEY_VALUE,
    PRINT_KEY_VALUE
};
}

#endif /* FLAGS_HPP_ */