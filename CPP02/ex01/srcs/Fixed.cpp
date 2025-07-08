/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   Fixed.cpp										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: victorviterbo <victorviterbo@student.42	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/07/07 21:54:40 by victorviter	   #+#	#+#			 */
/*   Updated: 2025/07/07 22:09:14 by victorviter	  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _int(0) {}


Fixed::Fixed(const int num)
{
	this->_int = num << this->_fb;
	return ;
}
Fixed::Fixed(const float num)
{
	this->_int = roundf(num * (1 << this->_fb));
	return ;
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &num) : _int(num._int) {}

Fixed &Fixed::operator=(const Fixed &operand)
{
	this->_int = operand._int;
	return (*this); 
}

std::ostream &operator<<(std::ostream& os, const Fixed &operand)
{

	os << operand.toFloat();
	return (os);
}

int	Fixed::getRawBits(void)
{
	return (this->_int);
}

void	Fixed::setRawBits(int const raw)
{
	this->_int = raw;
	return;
}

float	Fixed::toFloat(void) const
{
	float   asFloat;

	asFloat = ((float)this->_int) / (1 << this->_fb);
	return (asFloat);
}

int	Fixed::toInt(void) const
{
	int	asInt;

	asInt = this->_int >> this->_fb;
	return (asInt);
}
