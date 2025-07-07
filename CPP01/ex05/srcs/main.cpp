/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:25:20 by vviterbo          #+#    #+#             */
/*   Updated: 2025/06/12 13:25:33 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    harl;

    harl.complain("DEBUG");
    harl.complain("ERROR");
    harl.complain("lalalaa");
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    return (0);
}
