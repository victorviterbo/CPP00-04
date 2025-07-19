/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 22:01:27 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/19 18:38:07 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed			a;
	Fixed const		b(Fixed(5.05f) * Fixed(2));

	std::cout << "a = " << a << std::endl;
	std::cout <<  "++a = " << ++a << std::endl;
	std::cout <<  "a = " << a << std::endl;
	std::cout <<  "a++ = " << a++ << std::endl;
	std::cout <<  "a = " << a << std::endl;
	std::cout <<  "b = " << b << std::endl;
	std::cout <<  "min(a, b) = " << Fixed::min(a, b) << std::endl;
	std::cout << "a is now : " << a << ", b is now : " << b << std::endl;
	Fixed::min((Fixed &)a, (Fixed &)b)++;
	std::cout << "a is now : " << a << ", b is now : " << b << std::endl;
	std::cout <<  "min(a, b) = " << Fixed::min((const Fixed &)a, (const Fixed &)b ) << std::endl;
	std::cout <<  "max(a, b) = " << Fixed::max((Fixed &)a, (Fixed &)b) << std::endl;
	std::cout <<  "max(a, b) = " << Fixed::max((const Fixed &)a, (const Fixed &)b ) << std::endl;
	return 0;
}