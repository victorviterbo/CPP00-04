/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:26:04 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/23 15:26:19 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor() {}

Floor::Floor(Floor &other)
{
    for (unsigned int i = 0; i < this->_mat_size; i++)
        this->_materias[i] = other._materias[i]->clone();
}

Floor Floor::operator=(Floor &other)
{
    this->mopFloor();
    for (unsigned int i = 0; i < this->_mat_size; i++)
        this->_materias[i] = other._materias[i]->clone();
    return (*this);
}

Floor::~Floor()
{
    this->mopFloor();   
}
		
void	Floor::dropFloor(AMateria *m)
{
    if (this->_materias[this->_mat_idx])
        delete this->_materias[this->_mat_idx];
    this->_materias[this->_mat_idx] = m;
    this->_mat_idx = (this->_mat_idx + 1) % this->_mat_size;
}

void	Floor::mopFloor()
{
    for (unsigned int i = 0; i < this->_mat_size; i++)
    {
        if (this->_materias[i])
        {
            delete this->_materias[i];
            this->_materias[i] = NULL;
        }
    }
}
