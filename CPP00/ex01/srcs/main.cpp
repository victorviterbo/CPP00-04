/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:49:16 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 16:35:25 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	parse_phonebook_entry(PhoneBook phonebook)
{
	std::string	field;
	Contact		new_contact;

	std::cout << "First Name" << std::endl;
	std::cin >> field;
	if (field.length())
		new_contact.set_f_name(field);
	else
		return ;
	std::cout << "Last Name" << std::endl;
	std::cin >> field;
	if (field.length())
		new_contact.set_l_name(field);
	else
		return ;
	std::cout << "NickName" << std::endl;
	std::cin >> field;
	if (field.length())
		new_contact.set_nick_name(field);
	else
		return ;
	std::cout << "Phone Number" << std::endl;
	std::cin >> field;
	if (field.length())
		new_contact.set_phone_num(field);
	else
		return ;
	std::cout << "(Darkest) Secret" << std::endl;
	std::cin >> field;
	if (field.length())
		new_contact.set_secret(field);
	else
		return ;
}

void	execute_cmd(PhoneBook phonebook, std::string cmd)
{
	char	*index_str;
	int		idx;

	if (cmd.compare("ADD"))
		parse_phonebook_entry(phonebook);
	else if (cmd.compare("SEARCH"))
	{
		display_extract(phonebook);
		std::cin >> index_str;
		idx = std::atoi(index_str);
	}

}

int	main(void)
{
	std::string	cmd;
	PhoneBook	phonebook;

	while (1)
	{	
		std::getline(std::cin, cmd);
		if (cmd.compare("EXIT"))
			break ;
		else
			execute_cmd(cmd);
	}
}