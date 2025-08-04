/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:42:21 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/25 11:29:41 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource() {}

IMateriaSource::IMateriaSource(IMateriaSource &other)
{
    (void)other;
}

IMateriaSource	&IMateriaSource::operator=(IMateriaSource &other)
{
    (void)other;
    return (*this);
}

IMateriaSource::~IMateriaSource() {}