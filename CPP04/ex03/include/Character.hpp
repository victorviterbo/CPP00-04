/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:35:08 by vviterbo          #+#    #+#             */
/*   Updated: 2025/08/04 17:35:54 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Floor.hpp"

class Character : public ICharacter {
	public:
		Character();
		Character(std::string name);
		Character(Character &other);
		Character &operator=(Character &other);
		~Character() ;
		std::string const	&getName() const;
		void 				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
	protected :
		static const int	_inventory_size = 4;
		std::string			_name;
		AMateria			*_inventory[_inventory_size];
		Floor				_floor;
};
