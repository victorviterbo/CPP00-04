/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:31:32 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/10 15:08:18 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP


# include <cstdio>
# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal, virtual public Brain {
	public :
		Dog();
		Dog(std::string name);
		Dog(Dog &other);
		Dog &operator=(Dog &operand);
		~Dog();

		void	makeSound(void) const;
		Brain*	getBrain(void);
	private :
		Brain	*_brain;
};

#endif