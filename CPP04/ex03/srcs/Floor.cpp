/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:23:08 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/22 16:32:47 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor() {}

Floor::Floor(Floor &other)
{
	LList	*node;

	mopFloor();
	node = other._floor;
	while (node)\
	{
		this->_floor->append(new LList(node));
		node = node->next;
	}
	this->_floor = 
}
Floor::Floor &operator=(Floor &other);
Floor::~Floor();

void	Floor::dropObj(AMateria *m);
void	Floor::mopFloor(void);
	protected:
		static LList	*_floor;