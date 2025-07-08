/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:57:41 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/08 17:57:40 by vviterbo         ###   ########.fr       */
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

		Fixed	getPointX() const;
		Fixed	getPointY() const;
		void	setPoint(const float x, const float y);
		void	setPoint(const Fixed &x, const Fixed &y);
		void	incr_x();
		void	incr_y();
		void	decr_x();
		void	decr_y();
	private :
		Fixed	_x;
		Fixed	_y;
};

#endif