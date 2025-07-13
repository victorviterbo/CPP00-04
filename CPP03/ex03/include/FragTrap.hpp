/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:31:32 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/11 16:33:29 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &other);
		FragTrap &operator=(FragTrap &operand);
		~FragTrap();

		void 	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif