/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:25:52 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/01 10:44:20 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Random Animal";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Miafcuiannnnnn.... !!" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}