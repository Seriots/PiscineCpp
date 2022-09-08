/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:19:40 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/24 11:13:35 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include <iostream>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::setFirstName(std::string firstname)
{
	this->first_name = firstname;
	return ;
}

void	Contact::setLastName(std::string lastname)
{
	this->last_name = lastname;
	return ;
}

void	Contact::setNickname(std::string nickname)
{
	this->nick_name = nickname;
	return ;
}

void	Contact::setPhoneNumber(std::string phonenumber)
{
	this->phone_number = phonenumber;
	return ;
}

void	Contact::setDarkestSecret(std::string darkestsecret)
{
	this->darkest_secret = darkestsecret;
	return ;
}

std::string Contact::getFirstName(void)
{
	return (this->first_name);
}

std::string Contact::getLastName(void)
{
	return (this->last_name);
}

std::string Contact::getNickname(void)
{
	return (this->nick_name);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->phone_number);
}

std::string Contact::getDarkestSecret(void)
{
	return (this->darkest_secret);
}
