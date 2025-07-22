/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:30:31 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/22 23:34:12 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

class ICharacter;

class AMateria {
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria &other);
		AMateria &operator=(AMateria &other);
		virtual ~AMateria();
		std::string			const & getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};
