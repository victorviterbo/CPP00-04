/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:22:54 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 12:25:27 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_HPP
# define MEGAPHONE_HPP

# include <cctype>
# include <iostream>
# include <cstdio>

class	Megaphone
{
	public:
		Megaphone();
		~Megaphone();
		void	yell(const char *str);
};

#endif