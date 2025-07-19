/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:35:14 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/19 17:26:57 by victorviter      ###   ########.fr       */
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
		virtual Animal &operator=(Animal &operand);
		virtual ~Animal() = 0;

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		void			setType(std::string type);
		virtual Brain*	getBrain() = 0; 
	protected :
		std::string		_type;
};

#endif