/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:48:55 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/14 23:03:06 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cstdio>
# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>
# include <ctime>

class Zombie {
	public:
		Zombie( std::string name );
		~Zombie();
		void	announce( void );
	private:
		std::string	_name;
};

Zombie* newZombie( std::string name );
void	randomChump(std::string name);

#endif