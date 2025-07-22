/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:42:21 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/22 23:53:30 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {};

MateriaSource::MateriaSource(MateriaSource &other)
{
	for (unsigned int i = 0; i < 10; i++)
		this->_materias[i] = other._materias[i];
};

MateriaSource	&MateriaSource::operator=(MateriaSource &other)
{
	for (unsigned int i = 0; i < 10; i++)
		this->_materias[i] = other._materias[i];
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (unsigned int i = 0; i < 10; i++)
		delete this->_materias[i];
};

void	MateriaSource::learnMateria(AMateria *m)
{
	unsigned int i = 0;

	while (i < 10 && this->_materias[i])
		i++;
	if (i == 10)
		std::cout << "Cannot learn anymore materias" << std::endl;
	else
		this->_materias[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (unsigned int i = 0; i < 10; i++)
	{
		if (this->_materias[i]->getType().compare(type) == 0)
			return (this->_materias[i]->clone());
	}
	std::cout << "Source does not have this materia" << std::endl;
	return (NULL);
}
