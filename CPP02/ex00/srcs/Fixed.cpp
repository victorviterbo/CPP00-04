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

Fixed::Fixed() : _int(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &num) : _int(num._int) {}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other) {
        _int = other._int;
    }
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