/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 18:07:11 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/07 22:09:05 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FP_HPP
# define FP_HPP

# include <cstdio>
# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>
#include <cmath>

class Fixed {
	public :
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &num);
		Fixed &operator=(const Fixed &operand);
		~Fixed();

		int		getRawBits(void);
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private :
		int					_int;
		static const int	_fb = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &operand);

#endif
