/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:02:38 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/26 13:59:55 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

Fixed::Fixed(void) : Value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const &value)
{
	this->Value = value << this->nbBits;
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float const &value)
{
	this->Value = roundf(value * (1 << this->nbBits));
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->Value = other.getRawBits();
	return ;
}

std::ostream& operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}

int Fixed::getRawBits(void) const
{
	return this->Value;
}

void Fixed::setRawBits(int const raw)
{
	this->Value = raw;
	return ;
}

int Fixed::toInt(void) const
{
	return (this->Value >> this->nbBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->Value / (float)(1 << this->nbBits));
}
