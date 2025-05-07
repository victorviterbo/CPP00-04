/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:49:16 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 21:04:37 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	parse_phonebook_entry(PhoneBook *phonebook)
{
	std::string	field;
	Contact		*new_contact;

	new_contact = new Contact();
	std::cout << "First Name: ";
	std::cin >> field;
	if (field.length())
		new_contact->set_f_name(field);
	else
		return ;
	std::cout << "Last Name: ";
	std::cin >> field;
	if (field.length())
		new_contact->set_l_name(field);
	else
		return ;
	std::cout << "NickName: ";
	std::cin >> field;
	if (field.length())
		new_contact->set_nick_name(field);
	else
		return ;
	std::cout << "Phone Number: ";
	std::cin >> field;
	if (field.length())
		new_contact->set_phone_num(field);
	else
		return ;
	std::cout << "(Darkest) Secret: ";
	std::cin >> field;
	if (field.length())
		new_contact->set_secret(field);
	else
		return ;;
	phonebook->add(new_contact);
}

void	execute_cmd(PhoneBook *phonebook, std::string cmd)
{
	int		idx;

	idx = -1;
	if (!cmd.compare("ADD"))
		parse_phonebook_entry(phonebook);
	else if (!cmd.compare("SEARCH"))
	{
		phonebook->display_extract();
		std::cout << "Enter the index: " << std::endl;
		std::cin >> idx;
		if (0 <= idx && idx < std::min(phonebook->get_current_idx(), 7))
			phonebook->print_ith(idx);
		else
			std::cout << "index out of range..." << std::endl;
	}
}

int	main(void)
{
	std::string	cmd;
	PhoneBook	*phonebook;

	phonebook = new PhoneBook();
	while (1)
	{
		std::getline(std::cin, cmd);
		if (!cmd.compare("EXIT"))
			break ;
		else
			execute_cmd(phonebook, cmd);
	}
	delete phonebook;
	return (0);
}