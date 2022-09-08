/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:25:52 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/01 10:44:20 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Random WrongAnimal";
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Miafcuiannnnnn.... !!" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}