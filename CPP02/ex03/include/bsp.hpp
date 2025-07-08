/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:48:05 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/08 17:49:44 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_HPP
# define BSP_HPP

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	crossprod(const Point a, const Point b, const Point p);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif