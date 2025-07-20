/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:30:31 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/20 17:16:07 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria {
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria &other);
		AMateria &operator=(AMateria &other);
		~AMateria();
		std::string			const & getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};