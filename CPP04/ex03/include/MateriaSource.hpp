/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:03:02 by victorviter       #+#    #+#             */
/*   Updated: 2025/08/04 16:59:44 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource &other);
		MateriaSource	&operator=(MateriaSource &other);
		~MateriaSource();
		void		learnMateria(AMateria *m);
		AMateria*	createMateria(std::string const & type);
	private :
		static const int	_msize = 10;
		AMateria			*_materias[_msize];
};