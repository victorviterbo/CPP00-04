/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 15:20:06 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/28 14:08:01 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*Horde;
	int		i;

	i = 0;
	Horde = new Zombie[N];
	while (i < N)
	{
		Horde[i].nameZombie(name);
		i++;
	}
	return (Horde);
}
