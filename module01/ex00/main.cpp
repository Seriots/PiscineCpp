/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:54:57 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/24 12:01:52 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

int	main(void)
{
	{
		Zombie bob("bob");
		bob.announce();
	}

	std::cout << "----------------------" << std::endl;
	
	{
		Zombie *karl;

		karl = newZombie("karl");
		karl->announce();
		delete (karl);
	}
	
	std::cout << "----------------------" << std::endl;
	
	randomChump("Michel");
	
	return (0);
}