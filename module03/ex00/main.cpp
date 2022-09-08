/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:10:33 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/30 22:31:53 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

int	main(void)
{
	std::string name = "Michel";
	std::string name2 = "Bob";
	std::string name3 = "John";

	ClapTrap clap(name);
	ClapTrap clap2(name2);
	ClapTrap clap3(name3);
	ClapTrap clap4(clap);
	
	ClapTrap clap5;
	clap5 = clap;

	std::cout << "-----------Test 1-----------" << std::endl << std::endl;
	
	clap.attack(name2);
	clap.takeDamage(10);
	clap.beRepaired(10);

	std::cout << "-----------Test 2-----------" << std::endl << std::endl;

	clap2.attack(name);
	clap2.takeDamage(5);
	clap2.beRepaired(5);

	std::cout << "-----------Test 3-----------" << std::endl << std::endl;
	
	clap3.attack(name);
	clap3.attack(name);
	clap3.attack(name);
	clap3.attack(name);
	clap3.attack(name);
	clap3.beRepaired(1);
	clap3.beRepaired(1);
	clap3.beRepaired(1);
	clap3.beRepaired(1);
	clap3.beRepaired(1);
	clap3.beRepaired(1);
	
	return (0);
}