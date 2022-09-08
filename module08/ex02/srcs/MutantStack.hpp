/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:19:30 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/07 10:31:36 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(MutantStack const &src) : std::stack<T>(src) {}
		~MutantStack() {}

		MutantStack &operator=(MutantStack const &rhs)
		{
			std::stack<T>::operator=(rhs);
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator ite;

		ite begin()
		{
			return (std::stack<T>::c.begin());
		}

		ite end()
		{
			return (std::stack<T>::c.end());
		}
};
