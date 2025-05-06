/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:28:14 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 16:57:47 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::~PhoneBook() {}

void	PhoneBook::add(Contact new_entry)
{
	this->contact_list[curr_idx % 8] = new_entry;
	this->curr_idx++;
	if (this->curr_idx >= 16)
		this->curr_idx -= 8;
}

void	PhoneBook::display_extract()
{
	int	i;

	i = 0;
	while (i < this->curr_idx && i < 8)
	{
		std::cout << std::setw(10) << i << '|';
		this->contact_list[i].print_contact_mini();
	}
}