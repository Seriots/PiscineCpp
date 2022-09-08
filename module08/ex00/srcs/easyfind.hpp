/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:09:36 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/07 15:38:51 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>

template<typename T>
int easyfind(T &container, int to_find)
{
	typename T::iterator it = std::find(container.begin(), container.end(), to_find);
	if (it == container.end())
		throw std::exception();
	return (*(it));
}
