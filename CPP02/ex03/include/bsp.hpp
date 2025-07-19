/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:48:05 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/19 18:14:26 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	crossprod(Point &a, Point &b, Point &p);
bool	bsp(Point &a, Point &b, Point &c, Point &point);
