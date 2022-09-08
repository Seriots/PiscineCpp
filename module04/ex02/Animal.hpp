/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:25:26 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/01 10:43:57 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal
{
	public:
		Animal();
		Animal(Animal const &src);
		virtual ~Animal();

		Animal	&operator=(Animal const &rhs);
		
		virtual void	makeSound() const = 0;
		std::string		getType() const;

	protected:
		std::string	type;
	
};