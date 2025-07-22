/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 23:40:36 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/22 23:49:36 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor() {}

Floor::Floor(Floor &other)
{
    for (unsigned int i = 0; i < 100; i++)
        this->_floor[i] = other._floor[i]->clone();
}

Floor Floor::operator=(Floor &other)
{
    this->mopFloor();
    for (unsigned int i = 0; i < 100; i++)
        this->_floor[i] = other._floor[i]->clone();
}

Floor::~Floor()
{
    this->mopFloor();   
}
		
void	Floor::dropFloor(AMateria *m)
{
    for (unsigned int i = 0; i < 100; i++)
    {
        if (!this->_floor[i])
        {
            this->_floor[i] = m;
            return ;
        }
    }
}

void	Floor::mopFloor()
{
    for (unsigned int i = 0; i < 100; i++)
    {
        if (this->_floor[i])
        {
            delete this->_floor[i];
            this->_floor[i] = NULL;
        }
    }
}
