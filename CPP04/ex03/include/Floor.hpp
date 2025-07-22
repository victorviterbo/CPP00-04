/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:54:30 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/22 16:23:01 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

#include "AMateria.hpp"
#include "LList.hpp"

class Floor {
	public:
		Floor();
		Floor(Floor &other);
		Floor &operator=(Floor &other);
		~Floor();

		void	dropObj(AMateria *m);
		void	mopFloor(void);
	protected:
		static LList	*_floor;
};