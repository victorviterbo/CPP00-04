/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LList.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:06:34 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/22 16:35:51 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LList.hpp"

LList::LList()
{
	this->data = nullptr;
	this->next = nullptr;
	return ;
}

LList::LList(void *val)
{
	this->data = val;
	this->next = nullptr;
}

LList::LList(LList &other)
{
	this->data = other.data;
	this->next = nullptr;
}

LList &LList::operator=(LList &other)
{
	this->data = other.data;
	this->next = nullptr;
	return (*this);
}

LList::~LList()
{
	delete this->data;
	this->next = nullptr;
}

void	LList::append(LList *newNode)
{
	LList	*curr_node;

	curr_node = this;
	while (curr_node->next)
		curr_node = curr_node->next;
	curr_node->next = newNode;
}

void	LList::deleteList(LList *list)
{
	LList	*tmp = list->next;

	while (list)
	{
		delete list;
		list = tmp;
		tmp = list->next;
	}
}
