#ifndef __MODULE_H__
#define __MODULE_H__

// Copyright (C) 2021 José Enrique Vilca Campana
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <concepts>
namespace operations
{
	template <std::integral T, std::integral R>
	R mod(const T t_dividend, const R t_divisor);
} // namespace operations

template <std::integral T, std::integral R>
R operations::mod(const T t_dividend, const R t_divisor)
{
	const T quotient = t_dividend / t_divisor;
	const T remainder = t_dividend - (quotient * t_divisor);
	return remainder >= 0 ? remainder : t_divisor + remainder;
}

#endif // __MODULE_H__
