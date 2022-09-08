/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:27:14 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/01 12:01:30 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain
{
	public:
		Brain();
		Brain(Brain const &src);
		~Brain();
		
		Brain	&operator=(Brain const &rhs);
	private:
		std::string		_ideas[100];
};