/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 18:07:11 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/07 22:09:05 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

class Fixed {
	public :
		Fixed();
		Fixed(const Fixed &num);
		Fixed &operator=(const Fixed &operand);
		~Fixed();

		int     getRawBits(void);
		void    setRawBits(int const raw);
	private :
		int                 _int;
		static const int    _fb = 8;
};
