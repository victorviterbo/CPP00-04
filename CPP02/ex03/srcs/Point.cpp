/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:04:35 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/19 18:14:57 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point () : _x(0), _y(0)
{
	std::cout << "Point Constructor Called" << std::endl;
}

Point::Point (const float x, const float y) : _x(x), _y(y)
{
	std::cout << "Point Float Constructor Called" << std::endl;
}

Point::Point (const Point &point)
{
	std::cout << "Point Copy Constructor Called" << std::endl;
	this->_x = point._x;
	this->_y = point._y;
	return ;
}

Point &Point::operator=(const Point &operand)
{
	std::cout << "Point Assignement Operator Called" << std::endl;
	this->_x = operand._x;
	this->_y = operand._y;
	return (*this);
}

Point::~Point ()
{
	std::cout << "Point Destructor Called" << std::endl;
};

Fixed	&Point::getPointX()
{
	return (this->_x);
}
Fixed	&Point::getPointY()
{
	return (this->_y);
}

void	Point::setPointX(const float x)
{
	Fixed	fx(x);
	
	this->_x = fx;
}

void	Point::setPointY(const float y)
{
	Fixed	fy(y);
	
	this->_y = fy;
}
