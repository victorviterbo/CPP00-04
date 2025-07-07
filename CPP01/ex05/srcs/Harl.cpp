/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:29:49 by vviterbo          #+#    #+#             */
/*   Updated: 2025/06/12 13:32:00 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    this->levels[0] = "DEBUG";
    this->levels[1] = "INFO";
    this->levels[2] = "WARNING";
    this->levels[3] = "ERROR";

    this->messages[0] = &Harl::debug;
    this->messages[1] = &Harl::info;
    this->messages[2] = &Harl::warning;
    this->messages[3] = &Harl::error;
    return ;
}


void	Harl::complain(std::string level)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (levels[i].compare(level) == 0)
        {
            (this->*messages[i])();
            return ;
        }
        i++;
    }
    return ;
}


void	Harl::debug(void)
{
    std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. \
You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl \
    << "I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}