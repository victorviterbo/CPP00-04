/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:48:55 by vviterbo          #+#    #+#             */
/*   Updated: 2025/06/12 13:28:29 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cstdio>
# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>

class Zombie {
	public:
		Zombie(){};
		void nameZombie( std::string name );
		~Zombie();
		void	announce( void );
	private:
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif