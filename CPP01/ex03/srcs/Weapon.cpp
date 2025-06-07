/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:13:28 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/28 15:51:40 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

const	std::string	&Weapon::getType()
{
	const std::string	&type = this->_type;
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

