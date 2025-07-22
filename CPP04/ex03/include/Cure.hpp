/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:16:57 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/22 23:16:19 by victorviter      ###   ########.fr       */
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

class Cure : public AMateria {
    public :
        Cure();
        Cure(Cure &other);
        Cure &operator=(Cure &other);
        ~Cure();

        std::string const   &getType() const;
        Cure*	            clone() const;
        void	        	use(ICharacter& target);
};