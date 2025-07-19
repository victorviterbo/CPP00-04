/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 21:54:40 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/07 22:09:14 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _int(0) 
{
	std::cout << "Fixed Constructor Called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Fixed Destructor Called" << std::endl;
}

Fixed::Fixed(const Fixed &num) : _int(num._int)
{
	std::cout << "Fixed Copy Constructor Called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &operand)
{
	std::cout << "Fixed Assignment Operator Called" << std::endl;
	this->_int = operand._int;
	return (*this); 
}

int    Fixed::getRawBits(void)
{
	return (this->_int);
}

void    Fixed::setRawBits(int const raw)
{
	this->_int = raw;
	return;
}