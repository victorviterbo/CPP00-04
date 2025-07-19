/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongwrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:35:01 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 11:09:43 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <cstdio>
# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>

# include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal {
	public :
		wrongCat();
		wrongCat(std::string name);
		wrongCat(wrongCat &other);
		wrongCat &operator=(wrongCat &operand);
		~wrongCat();

		void	makeSound(void) const;
};

#endif