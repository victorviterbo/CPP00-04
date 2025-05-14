/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:28:26 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/14 19:59:41 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::print_contact_mini()
{
	if (this->f_name.length() > 10)
		std::cout << std::setw(9) << this->f_name << ".|";
	else
		std::cout << std::setw(10) << this->f_name << '|';
	if (this->l_name.length() > 10)
		std::cout << std::setw(9) << this->l_name << ".|";
	else
		std::cout << std::setw(10) << this->l_name << '|';
	if (this->nickname.length() > 10)
		std::cout << std::setw(9) << this->nickname << '.';
	else
		std::cout << std::setw(10) << this->nickname;
	std::cout << std::endl;
}

void	Contact::print_contact()
{
	std::cout << "First Name: " << this->f_name << '\n';
	std::cout << "Last Name: " << this->l_name << '\n';
	std::cout << "Nick Name: " << this->nickname << '\n';
	std::cout << "Phone Number: " << this->phone_num << '\n';
	std::cout << "(Darkest) Secret: " << this->secret << std::endl;
}

void	Contact::set_f_name(std::string fname)
{
	this->f_name = fname;
}
void	Contact::set_l_name(std::string lname)
{
	this->l_name = lname;
}
void	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}
void	Contact::set_phone_num(std::string phonenum)
{
	this->phone_num = phonenum;
}
void	Contact::set_secret(std::string dark_secret)
{
	this->secret = dark_secret;
}

void	Contact::parse_f_name()
{
	std::string	field;

	std::cout << "First Name: ";
	std::getline(std::cin, field);
	if (field.length())
		this->set_f_name(field);
	else
	{
		while (field.length() == 0)
		{
			std::cout << "This field cannot be left empty" << std::endl;
			std::cout << "First Name: ";
			std::getline(std::cin, field);
		}
		this->set_f_name(field);
	}
}

void	Contact::parse_l_name()
{
	std::string	field;

	std::cout << "Last Name: ";
	std::getline(std::cin, field);
	if (field.length())
		this->set_l_name(field);
	else		
	{
		while (field.length() == 0)
		{
			std::cout << "This field cannot be left empty" << std::endl;
			std::cout << "Last Name: ";
			std::getline(std::cin, field);
		}
		this->set_l_name(field);
	}
}

void	Contact::parse_nickname()
{
	std::string	field;

	std::cout << "NickName: ";
	std::getline(std::cin, field);
	if (field.length())
		this->set_nickname(field);
	else
	{
		while (field.length() == 0)
		{
			std::cout << "This field cannot be left empty" << std::endl;
			std::cout << "NickName: ";
			std::getline(std::cin, field);
		}
		this->set_nickname(field);
	}
}

void	Contact::parse_phone_num()
{
	std::string	field;

	std::cout << "Phone Number: ";
	std::getline(std::cin, field);
	if (field.length())
		this->set_phone_num(field);
	else
	{
		while (field.length() == 0)
		{
			std::cout << "This field cannot be left empty" << std::endl;
			std::cout << "Phone Number: ";
			std::getline(std::cin, field);
		}
		this->set_phone_num(field);
	}
}

void	Contact::parse_secret()
{
	std::string	field;

	std::cout << "(Darkest) Secret: ";
	std::getline(std::cin, field);
	if (field.length())
		this->set_secret(field);
	else
	{
		while (field.length() == 0)
		{
			std::cout << "This field cannot be left empty" << std::endl;
			std::cout << "(Darkest) Secret: ";
			std::getline(std::cin, field);
		}
		this->set_secret(field);
	}
}