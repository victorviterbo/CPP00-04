/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:42:21 by victorviter       #+#    #+#             */
/*   Updated: 2025/08/04 17:01:09 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	for (unsigned int i = 0; i < this->_msize; i++)
		this->_materias[i] = NULL;
};

MateriaSource::MateriaSource(MateriaSource &other) : IMateriaSource(other)
{
	for (unsigned int i = 0; i < this->_msize; i++)
		this->_materias[i] = other._materias[i];
};

MateriaSource	&MateriaSource::operator=(MateriaSource &other)
{
	for (unsigned int i = 0; i < this->_msize; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
	for (unsigned int i = 0; i < 10; i++)
		this->_materias[i] = other._materias[i];
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (unsigned int i = 0; i < this->_msize; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
};

void	MateriaSource::learnMateria(AMateria *m)
{
	unsigned int i = 0;

	while (i < this->_msize && this->_materias[i])
		i++;
	if (i == this->_msize)
		std::cout << "Cannot learn anymore materias" << std::endl;
	else
		this->_materias[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (unsigned int i = 0; i < this->_msize; i++)
	{
		if (!this->_materias[i])
			continue;
		if (this->_materias[i]->getType().compare(type) == 0)
			return (this->_materias[i]->clone());
	}
	std::cout << "Source does not have this materia" << std::endl;
	return (NULL);
}
