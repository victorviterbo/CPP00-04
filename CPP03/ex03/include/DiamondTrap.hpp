/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:31:32 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 10:14:21 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap &other);
		DiamondTrap &operator=(DiamondTrap &operand);
		~DiamondTrap();

		using	ScavTrap::attack;
		void	whoAmI(void);
	private :
		std::string	_name;
};

#endif