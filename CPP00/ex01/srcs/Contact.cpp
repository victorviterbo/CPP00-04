/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:28:26 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 16:54:11 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void	Contact::print_contact_mini()
{
	if (this->f_name.length() > 10)
		std::cout << '|' << std::setw(9) << this->f_name << ".|";
	else
		std::cout << '|' << std::setw(10) << this->f_name << '|';
	if (this->l_name.length() > 10)
		std::cout << std::setw(9) << this->l_name << ".|";
	else
		std::cout << std::setw(10) << this->l_name << '|';
	if (this->nickname.length() > 10)
		std::cout << std::setw(9) << this->nickname << '.';
	else
		std::cout << std::setw(10) << this->nickname;
}

void	Contact::print_contact()
{
	std::cout << "First Name: " << this->f_name << '\n';
	std::cout << "Last Name: " << this->l_name << '\n';
	std::cout << "Nick Name: " << this->nickname << '\n';
	std::cout << "Phone Number: " << this->phone_num << '\n';
	std::cout << "(Darkest) Secret: " << this->secret << '\n';	
}

void	Contact::set_f_name(std::string fname)
{
	this->f_name = fname;
}
void	Contact::set_l_name(std::string lname)
{
	this->l_name = lname;
}
void	Contact::set_nick_name(std::string nick_name)
{
	this->nickname = nick_name;
}
void	Contact::set_phone_num(std::string phone_num)
{
	this->phone_num = phone_num;
}
void	Contact::set_secret(std::string secret)
{
	this->secret = secret;
}