/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:24:15 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/22 13:44:13 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	player1;
	ScavTrap	player2("ConanLeB");
	ScavTrap	player3("CptnFourmi");
	ScavTrap	player4(player2);

	std::cout << std::endl << ">>> Initialisation finished" << std::endl << std::endl;
	std::cout << ">>> HP : " << player2.getHp() << ", Ep : " << player2.getEp() << ", dmgs : " << player2.getDamages() << std::endl;
	player1 = player3;
	std::cout << ">>> Fourmi attacks Conan" << std::endl;
	player1.attack("ConanLeB");
	std::cout << ">>> Fourmi is attacked 9" << std::endl;
	player3.takeDamage(9);
	std::cout << ">>> Fourmi is attacked 10" << std::endl;
	player3.takeDamage(101);
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
	player2.guardGate();
}