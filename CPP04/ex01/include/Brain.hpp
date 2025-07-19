/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:52:41 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/19 16:48:02 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstdio>
# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>

class Brain {
	public :
		Brain();
		Brain(Brain &other);
		Brain &operator=(Brain &operand);
		~Brain();

		void	newIdea(std::string idea);
		void	newIdea(std::string idea, unsigned int index);
		void	getIdea();
		std::string &getIdea(unsigned int index);
		void	popIdea();
		void	popIdea(unsigned int index);
	private :
		std::string		_ideas[100];
		unsigned int	_idx;
};

