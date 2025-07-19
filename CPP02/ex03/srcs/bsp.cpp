/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:01:45 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/19 18:10:57 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

Fixed	crossprod(Point &a, Point &b, Point &p)
{
	Fixed cross;

	cross = (b.getPointX() - a.getPointX()) * (p.getPointY() - a.getPointY()) \
	- (b.getPointY() - a.getPointY()) * (p.getPointX() - a.getPointX());
	return (cross);
}

bool	bsp(Point &a, Point &b, Point &c, Point &point)
{
	Fixed	zero(0);
	Fixed	cross_prods[3];

	cross_prods[0] = crossprod(a, b, point);
	cross_prods[1] = crossprod(b, c, point);
	cross_prods[2] = crossprod(c, a, point);

	if (cross_prods[0] <= zero && cross_prods[1] <= zero && cross_prods[2] <= zero)
		return (true);
	else if (cross_prods[0] >= zero && cross_prods[1] >= zero && cross_prods[2] >= zero)
		return (true);
	return (false);
}