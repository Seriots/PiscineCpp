/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:02:29 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/25 10:20:21 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
	std::cout << "Weapon " << this->type << " is created" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon " << this->type << " is destroyed" << std::endl;
	return ;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}

const std::string&	Weapon::getType(void)
{
	return (this->type);
}