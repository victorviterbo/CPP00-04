/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:52:41 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 13:30:38 by vviterbo         ###   ########.fr       */
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
		void	newIdea(std::string idea, int index);
		std::string &getIdea();
		std::string &getIdea(int index);
		void	popIdea();
		void	popIdea(int index);
	private :
		std::string	_ideas[100];
		int			_idx;
};

