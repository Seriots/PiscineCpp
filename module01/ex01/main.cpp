/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:54:57 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/24 12:45:58 by lgiband          ###   ########.fr       */
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
		int		N = 10;
		Zombie	*horde = zombieHorde(N, "Jean");

		for (int i = 0; i < N; i++)
			horde[i].announce();
		delete[] horde;
	}
	
	return (0);
}