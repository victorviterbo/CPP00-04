/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:28:14 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 17:55:33 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
	
PhoneBook::PhoneBook()
{
	std::cout << "Constructor called!" << std::endl;
	this->curr_idx = 0;
}

void	PhoneBook::add(Contact new_entry)
{
	std::cout << "adding entry at place " << this->curr_idx;
	this->contact_list[curr_idx % 8] = new_entry;
	this->curr_idx += 1;
	if (this->curr_idx >= 16)
		this->curr_idx -= 8;
	std::cout << "added entry at place " << this->curr_idx;
}

void	PhoneBook::display_extract()
{
	int	i;

	i = 0;
	std::cout << "curr_idx = " << this->curr_idx << std::endl;
	while (i < this->curr_idx && i < 8)
	{
		std::cout << std::setw(10) << i << '|';
		this->contact_list[i].print_contact_mini();
		i++;
	}
}

void	PhoneBook::print_ith(int idx)
{
	this->contact_list[idx].print_contact();
}

void	PhoneBook::print_curr_idx()
{
	std::cout << "curr idx is now " << this->curr_idx << std::endl;
}