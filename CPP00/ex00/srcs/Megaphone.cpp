/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:22:08 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 12:37:37 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Megaphone.hpp"

Megaphone::Megaphone() {}
Megaphone::~Megaphone() {}

void	Megaphone::yell(const char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = toupper(str[i]);
		std::cout << c;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	Megaphone	speaker;
	int			i;

	i = 1;
	if (argc == 1)
	{
		speaker.yell("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
		std::cout << std::endl;
	return (0);
	}
	while (i < argc)
	{
		speaker.yell(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
