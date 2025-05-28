/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:49:16 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/14 20:24:50 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	phonebook;

	std::cout << "Please enter one of the following: ADD, SEARCH, EXIT: ";
	while (std::getline(std::cin, cmd))
	{
		if (!cmd.compare("EXIT"))
			break ;
		else
			phonebook.execute_cmd(cmd);
		std::cout << "Please enter one of the following: ADD, SEARCH, EXIT: ";
	}
	return (0);
}