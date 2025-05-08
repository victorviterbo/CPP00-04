/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:28:14 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/08 14:24:48 by vviterbo         ###   ########.fr       */
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
	while (i < this->_curr_idx && i < 8)
	{
		std::cout << std::setw(10) << i << '|';
		this->_contact_list[i].print_contact_mini();
		i++;
	}
}

void	PhoneBook::print_ith(int idx)
{
	this->_contact_list[idx].print_contact();
}

int		PhoneBook::get_current_idx()
{
	return(this->_curr_idx);
}

void	PhoneBook::parse_phonebook_entry()
{
	std::string	field;
	Contact		new_contact;

	std::cout << "First Name: ";
	std::cin >> field;
	if (field.length())
		new_contact.set_f_name(field);
	else
		return ;
	std::cout << "Last Name: ";
	std::cin >> field;
	if (field.length())
		new_contact.set_l_name(field);
	else
		return ;
	std::cout << "NickName: ";
	std::cin >> field;
	if (field.length())
		new_contact.set_nick_name(field);
	else
		return ;
	std::cout << "Phone Number: ";
	std::cin >> field;
	if (field.length())
		new_contact.set_phone_num(field);
	else
		return ;
	std::cout << "(Darkest) Secret: ";
	std::cin >> field;
	if (field.length())
		new_contact.set_secret(field);
	else
		return ;
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
		std::cin >> idx_str;
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
		if (0 <= idx && idx < std::min(get_current_idx(), 7))
			print_ith(idx);
		else
			std::cout << "index out of range..." << std::endl;
	}
}
