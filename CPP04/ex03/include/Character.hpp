/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:35:08 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/20 17:50:23 by victorviter      ###   ########.fr       */
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

class Character : public ICharacter{
	public:
		Character();
		Character(Character &other);
		Character operator=(Character &other);

		std::string const	&getName() const;
		void 				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
	protected :
		std::string			_name;
		AMateria			*_inventory[4];
		unsigned int		_inven_idx;
};
