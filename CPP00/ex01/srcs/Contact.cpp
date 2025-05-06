/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:28:26 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 12:33:40 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


class	Contact
{
	public:
		Contact(char *f_name, char *l_name, char *nickname, char phone_num);
		~Contact();
		void	print_contact();
	private:
		char	*f_name;
		char	*l_name;
		char	*nickname;
		char	*phone_num;
		char	*secret;
};
