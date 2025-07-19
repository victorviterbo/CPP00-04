/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 22:01:27 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/19 18:15:09 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.hpp"

int main( void )
{
    Point   a(0.4,0.2);
    Point   c(0,0.9);
    Point   b(0.9,0);
    Point   p;
    Fixed   max(1);

    while (p.getPointX() < max)
    {
        p.setPointY(0);
        while (p.getPointY() < max)
        {
            if (bsp(a, b, c, p))
                std::cout << "X";
            else
                std::cout << ".";
            p.getPointY()++;
            p.getPointY()++;
            p.getPointY()++;
        }
        p.getPointX()++;
        p.getPointX()++;
        p.getPointX()++;
        std::cout << std::endl;
    }
    return 0;
}