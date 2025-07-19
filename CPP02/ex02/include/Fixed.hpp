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
#include <cmath>

class Fixed {
	public :
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();

		Fixed(const Fixed &num);
		Fixed &operator=(const Fixed &operand);

		Fixed operator+(const Fixed &operand) const;
		Fixed operator-(const Fixed &operand) const;
		Fixed operator*(const Fixed &operand) const;
		Fixed operator/(const Fixed &operand) const;

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

		bool	operator<(const Fixed &operand) const;
		bool	operator<=(const Fixed &operand) const;
		bool	operator==(const Fixed &operand) const;
		bool	operator!=(const Fixed &operand) const;
		bool	operator>(const Fixed &operand) const;
		bool	operator>=(const Fixed &operand) const;

		static Fixed		&min(Fixed &f1, Fixed &f2);
		static const Fixed	&min(const Fixed &f1, const Fixed &f2);
		static Fixed		&max(Fixed &f1, Fixed &f2);
		static const Fixed	&max(const Fixed &f1, const Fixed &f2);

		int		getRawBits(void);
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
	private :
		int					_int;
		static const int	_fb = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &operand);
