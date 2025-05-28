/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 15:25:56 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/28 14:12:16 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie		*horde;
	const int	n = 12;

	horde = zombieHorde(n, "Alan");
	for (int i = 0; i < n; ++i)
	{
		horde[i].announce();
	}
	delete[] horde;
}