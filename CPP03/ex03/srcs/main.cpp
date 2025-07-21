/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:24:15 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/21 17:50:07 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	player1;
	std::cout << "-----------------------------------" << std::endl;
	DiamondTrap	player2("ConanLeB");
	std::cout << "-----------------------------------" << std::endl;
	DiamondTrap	player3("CptnFourmi");
	std::cout << "-----------------------------------" << std::endl;
	DiamondTrap	player4(player2);
	std::cout << "-----------------------------------" << std::endl;

	player1 = player3;
	player2.whoAmI();
	player3.whoAmI();
	std::cout << "HP : " << player1.getHp() << ", Ep : " << player1.getEp() << ", dmgs : " << player1.getDamages() << std::endl;
	player1.attack("some other player");
	std::cout << "Fourmi attacks Conan" << std::endl;
	player1.attack("ConanLeB");
	std::cout << "Fourmi is attacked 9" << std::endl;
	player3.takeDamage(9);
	std::cout << "Fourmi is attacked 101" << std::endl;
	player3.takeDamage(101);
	std::cout << "Fourmi is attacked 1" << std::endl;
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
	player3.highFivesGuys();
	player2.guardGate();
}