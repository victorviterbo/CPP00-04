/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:35:01 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/19 17:10:31 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <cstdio>
# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : virtual public Animal {
	public :
		Cat();
		Cat(std::string name);
		Cat(Cat &other);
		Cat &operator=(Cat &operand);
		~Cat();

		void	makeSound(void) const;
		Brain*	getBrain(void);
		void	getTypicalCatThought(void);
	private :
		Brain	*_brain;
};

#endif