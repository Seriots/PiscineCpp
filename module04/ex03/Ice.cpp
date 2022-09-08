/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:05:29 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/01 19:09:59 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice(void): AMateria("ice")
{
	return ;
}

Ice::Ice(std::string const & type): AMateria(type)
{
	return ;
}

Ice::Ice(Ice const &src): AMateria(src)
{
	*this = src;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice &Ice::operator=(Ice const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}