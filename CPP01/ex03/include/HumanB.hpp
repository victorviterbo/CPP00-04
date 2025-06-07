/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:35:58 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/28 15:57:54 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name) : _name(name) {};
		~HumanB() {};
		void	attack();
		void	setWeapon(Weapon &weapon);
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif