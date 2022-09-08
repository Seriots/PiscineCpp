/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:55:01 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/06 13:50:49 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <vector>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &src);
		~Span();

		Span &operator=(Span const &rhs);

		void    addNumber(int n);
		void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int     shortestSpan();
		int     longestSpan();

	private:
		unsigned int    _N;
		std::vector<int>	_tab;
		unsigned int    _size;

	class  IsFullException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class NotEnoughException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};