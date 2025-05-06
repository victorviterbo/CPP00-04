/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:22:45 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 16:55:19 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	display_extract();
		void	print_indx(int	i);
		void	add(Contact	new_entry);
	private:
		int		curr_idx;
		bool	is_full;
		Contact	contact_list[8];
};

#endif