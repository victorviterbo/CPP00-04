/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:57:41 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/19 18:14:46 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	public :
		Point ();
		Point (const float x, const float y);
		Point (const Point &point);
        Point &operator=(const Point &operand);
		~Point ();

		Fixed	&getPointX();
		Fixed	&getPointY();
		void	setPointX(const float x);
		void	setPointY(const float y);
	private :
		Fixed	_x;
		Fixed	_y;
};

#endif