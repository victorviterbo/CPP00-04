/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:22:45 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/14 19:52:11 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

#include <cstdlib>

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	display_extract();
		void	add(Contact	new_entry);
		void	print_ith(int idx);
		void	parse_phonebook_entry();
		void	execute_cmd(std::string cmd);
	private:
		int		_curr_idx;
		Contact	_contact_list[8];
};

#endif