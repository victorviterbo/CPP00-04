/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 23:36:53 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/22 23:41:12 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

#include "AMateria.hpp"

class Floor {
	public :
		Floor();
		Floor(Floor &other);
		Floor operator=(Floor &other);
		~Floor();
		
		void	dropFloor(AMateria *m);
		void	mopFloor();
	private :
		static AMateria		*_floor[20];
};
