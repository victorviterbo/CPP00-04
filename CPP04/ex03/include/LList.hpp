/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LList.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:00:42 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/22 16:29:45 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

class LList {
    public :
		LList();
		LList(void *val);
		LList(LList &other);
		LList &operator=(LList &other);
		~LList();

		void	append(LList *newNode);
		void	deleteList(LList *list);
	private :
		void	*data;
		LList	*next;
};
