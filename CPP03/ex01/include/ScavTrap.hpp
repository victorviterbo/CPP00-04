/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:31:32 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/10 17:08:56 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPPP
# define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &other);
		ScavTrap &operator=(ScavTrap &operand);
		~ScavTrap();

		void	guardGate(void);
};

#endif