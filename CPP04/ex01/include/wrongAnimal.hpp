/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:35:14 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 11:07:11 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP


# include <cstdio>
# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>

class wrongAnimal {
	public :
		wrongAnimal();
		wrongAnimal(std::string name);
		wrongAnimal(wrongAnimal &other);
		wrongAnimal &operator=(wrongAnimal &operand);
		~wrongAnimal();

		void	makeSound(void) const;
		std::string	getType(void) const;
	protected :
		std::string		_type;
};

#endif