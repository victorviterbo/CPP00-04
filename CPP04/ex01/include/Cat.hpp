/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:35:01 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/19 14:04:56 by vviterbo         ###   ########.fr       */
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

class Cat : virtual public Animal, virtual public Brain {
	public :
		Cat();
		Cat(std::string name);
		Cat(Cat &other);
		Cat &operator=(Cat &operand);
		~Cat();

		void	makeSound(void) const;
		Brain*	getBrain(void);
	private :
		Brain	*_brain;
};

#endif