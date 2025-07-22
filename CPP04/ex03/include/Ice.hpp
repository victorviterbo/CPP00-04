/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:16:57 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/22 23:16:14 by victorviter      ###   ########.fr       */
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

class Ice : public AMateria {
    public :
        Ice();
        Ice(Ice &other);
        Ice &operator=(Ice &other);
        ~Ice();

        std::string const   &getType() const;
        Ice*	            clone() const;
        void		        use(ICharacter& target);
};