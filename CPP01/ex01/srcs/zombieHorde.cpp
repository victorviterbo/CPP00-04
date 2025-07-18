/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 15:20:06 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 13:53:35 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*Horde = new Zombie[N];
	int		i;

	i = 0;
	//Horde = ;
	while (i < N)
	{
		Horde[i].nameZombie(name);
		i++;
	}
	return (Horde);
}
