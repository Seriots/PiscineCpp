/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:39:49 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/30 12:36:48 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void)
	: x(Fixed()), y(Fixed()) {}

Point::Point(Point const &cpy)
	: x(Fixed(cpy.getX())), y(Fixed(cpy.getY())) {}


Point::Point(float &x, float &y)
	: x(Fixed(x)), y(Fixed(y)) {}

Point::Point(float const &x, float const &y)
	: x(Fixed(x)), y(Fixed(y)) {}

Point::~Point(void) {}


void Point::operator=(Point const &other)
{
	(void)other;
	return ;
}

float Point::getX(void) const
{
	return (this->x.toFloat());
}

float Point::getY(void) const
{
	return (this->y.toFloat());
}