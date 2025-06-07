/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:32:18 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/28 15:47:45 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
	public:
		Weapon(std::string type) : _type(type) {};
		~Weapon() {};
		const std::string	&getType();
		void				setType(std::string type);
	private:
		std::string	_type;
};

#endif