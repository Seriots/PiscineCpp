/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:12:05 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/01 19:13:23 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure(void): AMateria("cure")
{
	return ;
}

Cure::Cure(std::string const & type): AMateria(type)
{
	return ;
}

Cure::Cure(Cure const &src): AMateria(src)
{
	*this = src;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure &Cure::operator=(Cure const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
