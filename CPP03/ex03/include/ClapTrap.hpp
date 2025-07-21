/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:31:32 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/21 17:34:15 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP


# include <cstdio>
# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>

class ClapTrap {
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &other);
		ClapTrap &operator=(ClapTrap &operand);
		~ClapTrap();
		
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string		&getName(void);
		unsigned int	getHp(void);
		unsigned int	getEp(void);
		unsigned int	getDamages(void);
		void			setHp(unsigned int hp);
		void			setEp(unsigned int ep);
		void			setDamages(unsigned int damages);
		void			setStats(unsigned int hp, unsigned int ep, unsigned int dmgs);
	protected :
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_damages;
};

#endif