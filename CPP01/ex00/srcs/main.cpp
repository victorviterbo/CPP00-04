/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:11:53 by vviterbo          #+#    #+#             */
/*   Updated: 2025/06/12 10:19:40 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*Charles;
	Zombie	*Anna;

	Charles = newZombie("Charles");
	Anna = newZombie("Anna");
	Charles->announce();
	Anna->announce();
	randomChump("Michel");
	delete Charles;
	delete Anna;
}