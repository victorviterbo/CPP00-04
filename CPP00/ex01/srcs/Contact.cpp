/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:28:26 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/06 16:33:41 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"



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