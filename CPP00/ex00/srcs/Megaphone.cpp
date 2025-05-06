/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:22:08 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 15:51:55 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <cstdio>
# include <string>

class	Megaphone
{
	public:
		Megaphone();
		~Megaphone();
		void	yell(const std::string str);
};

Megaphone::Megaphone() {}
Megaphone::~Megaphone() {}

void	Megaphone::yell(const std::string str)
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
	std::string	cstr;
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
		cstr = argv[i];
		speaker.yell(cstr);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
