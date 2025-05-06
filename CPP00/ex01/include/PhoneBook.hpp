/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:22:45 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 17:50:31 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook() {};
		void	print_curr_idx();
		void	display_extract();
		void	print_indx(int	i);
		void	add(Contact	new_entry);
		void	print_ith(int idx);
	private:
		int		curr_idx;
		Contact	contact_list[8];
};

#endif