/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:04:35 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/08 17:57:52 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point () : _x(0), _y(0) {}

Point::Point (const float x, const float y) : _x(x), _y(y) {}

Point::Point (const Point &point)
{
	this->_x = point._x;
	this->_y = point._y;
	return ;
}

Point &Point::operator=(const Point &operand)
{
	this->_x = operand._x;
	this->_y = operand._y;
	return (*this);
}

Point::~Point () {};

Fixed	Point::getPointX() const
{
	return (this->_x);
}
Fixed	Point::getPointY() const
{
	return (this->_y);
}

void	Point::setPoint(const float x, const float y)
{
	Fixed	fx(x);
	Fixed	fy(y);

	this->_x = fx;
	this->_y = fy;
}

void	Point::setPoint(const Fixed &x, const Fixed &y)
{
	this->_x = x;
	this->_y = y;
}

void	Point::incr_x(void)
{
	this->_x++;
}

void	Point::incr_y()
{
	this->_y++;
}
void	Point::decr_x()
{
	this->_x--;
}
void	Point::decr_y()
{
	this->_y--;
}
