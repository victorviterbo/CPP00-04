/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:26:38 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 16:33:30 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <cctype>
# include <cstdio>
# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>

class	Contact
{
	public:
		Contact();
		~Contact();
		void	print_contact_oneline();
		void	print_contact();
		void	set_f_name(std::string fname);
		void	set_l_name(std::string lname);
		void	set_nick_name(std::string nick_name);
		void	set_phone_num(std::string phone_num);
		void	set_secret(std::string secret);

	private:
		void		print_format_field(std::string str);
		std::string	f_name;
		std::string	l_name;
		std::string	nickname;
		std::string	phone_num;
		std::string	secret;
};

#endif