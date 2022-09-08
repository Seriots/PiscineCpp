/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:56:52 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/07 10:25:31 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <cmath>
#include "Span.hpp"

Span::Span() : _N(0), _size(0) {}

Span::Span(unsigned int N) : _N(N), _size(0) {}

Span::Span(Span const &src) : _N(src._N), _size(src._size)
{
	std::vector<int>::const_iterator	it;

	for (it = src._tab.begin(); it != src._tab.end() - 1; it++)
		_tab.push_back(*it);
}

Span::~Span()
{
}

Span &Span::operator=(Span const &rhs)
{
	std::vector<int>::const_iterator	it;
	std::vector<int>					new_v;
	if (this != &rhs)
	{
		for (it = rhs._tab.begin(); it != rhs._tab.end() - 1; it++)
			new_v.push_back(*it);
		_tab = new_v;
	}
	return *this;
}

void    Span::addNumber(int n)
{
	if (_size == _N)
		throw Span::IsFullException();
	_tab.push_back(n);
	_size++;
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{

	while (begin != end)
	{
		if (_size >= _N)
			throw Span::IsFullException();
		_tab.push_back(*begin);
		begin++;
		_size++;
	}
}

int     Span::shortestSpan()
{
	std::vector<int>			sort_vec = _tab;
	std::vector<int>::iterator	it;
	int				min;

	if (_size < 2)
		throw Span::NotEnoughException();
	std::sort(sort_vec.begin(), sort_vec.end());
	it = sort_vec.begin();
	min = abs(*it - *(it + 1));
	while (it != sort_vec.end() - 1)
	{
		if (abs(*it - *(it + 1)) < min)
			min = abs(*it - *(it + 1));
		it++;
	}
	return (min);
}

int     Span::longestSpan()
{
	std::vector<int>	sort_vec = _tab;
	if (_size < 2)
		throw Span::NotEnoughException();
	std::sort(sort_vec.begin(), sort_vec.end());
	return (*(sort_vec.end() - 1) - *( sort_vec.begin()));
}

const char *Span::IsFullException::what() const throw()
{
	return ("No more space in the Span");
}

const char *Span::NotEnoughException::what() const throw()
{
	return ("Not enough numbers in the Span");
}