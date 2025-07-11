/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:31:32 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/11 13:30:19 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &other);
		ScavTrap &operator=(ScavTrap &operand);
		~ScavTrap();

		void 	attack(const std::string& target);
		void	guardGate(void);
};

#endif