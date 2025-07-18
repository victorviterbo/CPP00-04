/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:35:14 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 13:44:20 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP


# include <cstdio>
# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>

#include "Brain.hpp"

class Animal {
	public :
		Animal();
		Animal(std::string name);
		Animal(Animal &other);
		Animal &operator=(Animal &operand);
		virtual ~Animal();

		virtual void	makeSound(void) const;
		std::string	getType(void) const;
	protected :
		std::string		_type;
		Brain			*_brain;
};

#endif