/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:28:14 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/14 20:04:02 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_curr_idx = 0;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::add(Contact new_entry)
{
	_contact_list[this->_curr_idx % 8] = new_entry;
	this->_curr_idx += 1;
	if (this->_curr_idx >= 16)
		this->_curr_idx -= 8;
}

void	PhoneBook::display_extract()
{
	int	i;

	i = 0;
	std::cout << std::string(68, '*') << std::endl;
	std::cout << "|  Index   |First Name|Last Name |Nick Name | Phone Num |  Secret  |";
	std::cout << std::endl;
	std::cout << std::string(69, '-') << std::endl;
	while (i < std::min(this->_curr_idx, 8))
	{
		std::cout << '|' << std::setw(10) << i << '|';
		this->_contact_list[i].print_contact_mini();
		if (i + 1 < std::min(this->_curr_idx, 8))
			std::cout << std::string(68, '-') << std::endl;
		i++;
	}
	std::cout << std::string(68, '*') << std::endl;
}

void	PhoneBook::print_ith(int idx)
{
	this->_contact_list[idx].print_contact();
}

void	PhoneBook::parse_phonebook_entry()
{
	std::string	field;
	Contact		new_contact;

	new_contact.parse_f_name();
	new_contact.parse_l_name();
	new_contact.parse_nickname();
	new_contact.parse_phone_num();
	new_contact.parse_secret();
	this->add(new_contact);
}

void	PhoneBook::execute_cmd(std::string cmd)
{
	std::string	idx_str;
	int			idx;

	idx = -1;
	if (!cmd.compare("ADD"))
		this->parse_phonebook_entry();
	else if (!cmd.compare("SEARCH") && this->_curr_idx)
	{
		display_extract();
		std::cout << "Enter the index: " << std::endl;
		std::getline(std::cin, idx_str);
		if (!idx_str.length())
			return ;
		for (size_t i = 0; i < idx_str.length(); i++)
		{
			if (idx_str[i] < '0' || idx_str[i] > '9')
			{
				std::cout << "Invalid argument..." << std::endl;
				return ;
			}
		}
		idx = atoi(idx_str.c_str());
		if (0 <= idx && idx < std::min(this->_curr_idx, 8))
			print_ith(idx);
		else
			std::cout << "index out of range..." << std::endl;
	}
}
