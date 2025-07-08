/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 22:01:27 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/08 15:31:45 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed   const   b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    std::cout << Fixed::min((const Fixed &) a, (const Fixed &) b ) << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::max((const Fixed &) a, (const Fixed &) b ) << std::endl;
    return 0;
}