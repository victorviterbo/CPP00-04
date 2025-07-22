/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:24:15 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/22 13:45:45 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	player1;
	ClapTrap	player2("ConanLeB");
	ClapTrap	player3("CptnFourmi");
	ClapTrap	player4(player2);

	player1 = player3;
	std::cout << ">>> Fourmi attacks Conan" << std::endl;
	player1.attack("ConanLeB");
	std::cout << ">>> Fourmi is attacked 9" << std::endl;
	player3.takeDamage(9);
	std::cout << ">>> Fourmi is attacked 10" << std::endl;
	player3.takeDamage(10);
	std::cout << ">>> Fourmi is attacked 1" << std::endl;
	player3.takeDamage(1);
	player3.attack("ConanLeB");
	player3.beRepaired(1);
	player3.beRepaired(1);
	player3.beRepaired(1);
	player3.beRepaired(1);
	player3.beRepaired(1);
	player3.beRepaired(1);
	player3.beRepaired(1);
	player3.beRepaired(1);
	player3.beRepaired(1);
	player3.beRepaired(1000);
	player3.beRepaired(1);
	std::cout << "Segmentation fault (core dumped)" << std::endl;
}