/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:10:19 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/31 13:19:09 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name),  _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy" << std::endl;
		return ;
	}
	this->_energyPoints --;
	std::cout << "ClapTrap " << this->_name <<  " attacks " << target << " at " << this->_attackDamage << " damage points" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		if (amount > this->_hitPoints)
			amount = this->_hitPoints;
		this->_hitPoints -= amount;
		std::cout << this->_name << " takes " << amount << " damage points he has now " << this->_hitPoints << " hit points !" << std::endl;
	}
	else
	{
		if (this->_hitPoints <= 0)
			std::cout << this->_name << " is already dead !" << std::endl;
		else
			std::cout << this->_name << " is out of energy !" << std::endl;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0 && this->_hitPoints < 100)
	{
		if (this->_hitPoints + amount > 100)
			amount = 100 - this->_hitPoints;
		this->_hitPoints += amount;
		this->_energyPoints --;
		std::cout << this->_name << " has been repaired " << amount << " points ! He is now at " << this->_hitPoints << " hit points !" << std::endl;
	}
	else
	{
		if (this->_hitPoints <= 0)
			std::cout << this->_name << " is already dead !" << std::endl;
		else if (this->_energyPoints <= 0)
			std::cout << this->_name << " is out of energy !" << std::endl;
		else
			std::cout << this->_name << " is already at maximum hit points !" << std::endl;
	}
	return ;
}