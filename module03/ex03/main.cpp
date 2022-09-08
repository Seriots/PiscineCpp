/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:10:33 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/31 13:38:35 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	std::string name = "Michel";
	std::string name2 = "Bob";
	std::string name3 = "John";

	{
		DiamondTrap clap(name);
		clap.whoAmI();
		clap.attack(name3);
		clap.takeDamage(1);
		clap.beRepaired(1);
		clap.highFivesGuys();
		clap.guardGate();
	}

	std::cout << "==========================" << std::endl;
	{
		DiamondTrap clap;
		clap.whoAmI();
		clap.attack(name3);
		clap.takeDamage(1);
		clap.beRepaired(1);
		clap.highFivesGuys();
		clap.guardGate();

	}
	
	std::cout << "==========================" << std::endl;
	{
		DiamondTrap clap(name);
		std::cout << "==========================" << std::endl;
		std::cout << "==========================" << std::endl;
		DiamondTrap clap3(clap);
		clap.whoAmI();
		clap.attack(name3);
		clap.takeDamage(1);
		clap.beRepaired(1);
		clap.highFivesGuys();
		clap.guardGate();
	}
	
	std::cout << "==========================" << std::endl;
	{
		DiamondTrap clap(name2);
		clap.whoAmI();
		clap.attack(name3);
		clap.takeDamage(1);
		clap.beRepaired(1);
		clap.highFivesGuys();
		clap.guardGate();
	}
	return (0);
}