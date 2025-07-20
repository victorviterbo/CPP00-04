/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:03:02 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/20 17:20:59 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual	IMateriaSource();
		virtual	IMateriaSource(IMateriaSource &other);
		virtual IMateriaSource	&operator=(IMateriaSource &other);
		virtual	~IMateriaSource() {};
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};