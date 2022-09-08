/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:02:38 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/29 12:24:05 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

Fixed::Fixed(void) : Value(0)
{
	return ;
}

Fixed::Fixed(int const &value)
{
	this->Value = value << this->nbBits;
	return ;
}

Fixed::Fixed(float const &value)
{
	this->Value = roundf(value * (1 << this->nbBits));
	return ;
}

Fixed::Fixed(Fixed const &cpy)
{
	*this = cpy;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

void Fixed::operator=(Fixed const &other)
{
	this->Value = other.getRawBits();
	return ;
}

bool	Fixed::operator>(Fixed const &other) const
{
	return (this->Value > other.getRawBits());
}

bool	Fixed::operator<(Fixed const &other) const
{
	return (this->Value < other.getRawBits());
}

bool	Fixed::operator>=(Fixed const &other) const
{
	return (this->Value >= other.getRawBits());
}

bool	Fixed::operator<=(Fixed const &other) const
{
	return (this->Value <= other.getRawBits());
}

bool	Fixed::operator==(Fixed const &other) const
{
	return (this->Value == other.getRawBits());
}

bool	Fixed::operator!=(Fixed const &other) const
{
	return (this->Value != other.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &other)
{
	Fixed result;
	
	result.Value = this->Value + other.getRawBits();
	return (result);
}

Fixed Fixed::operator-(Fixed const &other)
{
	Fixed result;
	
	result.Value = this->Value - other.getRawBits();
	return (result);
}

Fixed Fixed::operator*(Fixed const &other)
{
	Fixed result;

	result.Value = roundf(this->toFloat() * other.toFloat() * (1 << this->nbBits));
	return (result);
}

Fixed Fixed::operator/(Fixed const &other)
{
	Fixed result;
	
	result.Value = this->toFloat() / other.toFloat() * (1 << this->nbBits);
	return (result);
}

Fixed& Fixed::operator++(void)
{
	this->Value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed result;
	
	result.Value = this->Value;
	this->Value++;
	return (result);
}

Fixed& Fixed::operator--(void)
{
	this->Value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed result;
	
	result.Value = this->Value;
	this->Value--;
	return (result);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
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
