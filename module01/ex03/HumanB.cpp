/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:07:15 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/25 10:17:57 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon = 0;
	std::cout << this->name << " is created" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << this->name << " is destroyed" << std::endl;
	return ;
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their fists" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
	return ;
}
