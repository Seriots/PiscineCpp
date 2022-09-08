/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:22:39 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/06 13:38:49 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &src);
		~Array(void);

		Array	&operator=(Array const &rhs);

		T		&operator[](unsigned int i);
		T const	&operator[](unsigned int i) const;

		unsigned int	size(void) const;

	private:
		T				*_array;
		unsigned int	_size;

	class OutOfRangeException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};
