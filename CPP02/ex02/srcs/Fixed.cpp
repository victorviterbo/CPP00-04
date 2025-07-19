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

Fixed::Fixed() : _int(0)
{
	std::cout << "Fixed Constructor Called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Fixed Int Constructor Called" << std::endl;
	this->_int = num << this->_fb;
	return ;
}
Fixed::Fixed(const float num)
{
	std::cout << "Fixed Float Constructor Called" << std::endl;
	this->_int = roundf(num * (1 << this->_fb));
	return ;
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

Fixed::~Fixed()
{
	std::cout << "Fixed Destructor Called" << std::endl;
}

Fixed Fixed::operator+(const Fixed &operand) const
{
	Fixed	sum(*this);

	sum._int += operand._int;
	return (sum);
}

Fixed Fixed::operator-(const Fixed &operand) const
{
	Fixed	diff(*this);

	diff._int -= operand._int;
	return (diff);
}

Fixed Fixed::operator*(const Fixed &operand) const
{
	Fixed	prod(*this);

	prod._int *= operand._int;
	prod._int = prod._int >> this->_fb;
	return (prod);
}

Fixed Fixed::operator/(const Fixed &operand) const
{
	Fixed	ratio(*this);

	ratio._int /= operand._int;
	ratio._int = ratio._int << this->_fb;
	return (ratio);
}

Fixed &Fixed::operator++(void)
{
	this->_int += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	pre_incr(*this);

	this->_int += 1;
	return (pre_incr);
}

Fixed &Fixed::operator--(void)
{
	this->_int -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	pre_decr(*this);

	this->_int -= 1;
	return (pre_decr);
}

bool Fixed::operator<(const Fixed &operand) const
{
	if (this->_int < operand._int)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &operand) const
{
	if (this->_int <= operand._int)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &operand) const
{
	if (this->_int == operand._int)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &operand) const
{
	if (this->_int != operand._int)
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed &operand) const
{
	if (this->_int > operand._int)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &operand) const
{
	if (this->_int >= operand._int)
		return (true);
	return (false);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
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
