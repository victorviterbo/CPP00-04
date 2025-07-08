/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 22:01:27 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/08 17:59:59 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.hpp"

int main( void )
{
    Point   a(0.2,0.2);
    Point   b(0,0.9);
    Point   c(0.9,0);
    Point   p;
    Fixed   max(1);

    while (p.getPointX() < max)
    {
        p.setPoint(p.getPointX().toFloat(), 0);
        while (p.getPointY() < max)
        {
            if (bsp(a, b, c, p))
                std::cout << "X";
            else
                std::cout << ".";
            p.incr_y();
            p.incr_y();
            p.incr_y();
        }
        p.incr_x();
        p.incr_x();
        p.incr_x();
        std::cout << std::endl;
    }
    return 0;
}