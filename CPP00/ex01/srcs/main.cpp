/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:49:16 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 17:54:48 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	parse_phonebook_entry(PhoneBook phonebook)
{
	std::string	field;
	Contact		new_contact;

	std::cout << "First Name: ";
	std::cin >> field;
	if (field.length())
		new_contact.set_f_name(field);
	else
		return ;
	std::cout << std::endl << "Last Name: ";
	std::cin >> field;
	if (field.length())
		new_contact.set_l_name(field);
	else
		return ;
	std::cout << std::endl << "NickName: ";
	std::cin >> field;
	if (field.length())
		new_contact.set_nick_name(field);
	else
		return ;
	std::cout << std::endl << "Phone Number: ";
	std::cin >> field;
	if (field.length())
		new_contact.set_phone_num(field);
	else
		return ;
	std::cout << std::endl << "(Darkest) Secret: ";
	std::cin >> field;
	if (field.length())
		new_contact.set_secret(field);
	else
		return ;
	std::cout << std::endl;
	phonebook.print_curr_idx();
	phonebook.add(new_contact);
	phonebook.print_curr_idx();
}

void	execute_cmd(PhoneBook phonebook, std::string cmd)
{
	int		idx;

	if (!cmd.compare("ADD"))
		parse_phonebook_entry(phonebook);
	else if (!cmd.compare("SEARCH"))
	{
		phonebook.display_extract();
		std::cout << "Enter the index: " << std::endl;
		std::cin >> idx;
		if (0 <= idx && idx <= 7)
			phonebook.print_ith(idx);
		else
			std::cout << "index out of range..." << std::endl;
	}
}

int	main(void)
{
	std::string	cmd;
	PhoneBook	phonebook;

	while (1)
	{
		std::cout << "back to main loop" << std::endl;
		phonebook.print_curr_idx();
		std::getline(std::cin, cmd);
		if (!cmd.compare("EXIT"))
			break ;
		else
			execute_cmd(phonebook, cmd);
	}
	return (0);
}