/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:10:33 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/30 22:50:35 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::string name = "Michel";
	std::string name2 = "Bob";
	std::string name3 = "John";

	ScavTrap clap(name);
	ScavTrap clap2(name2);
	ScavTrap clap3;
	ScavTrap clap4(clap);

	clap3 = clap;
	clap2.guardGate();
	clap2.beRepaired(1);
	clap2.beRepaired(1);
	clap2.takeDamage(10);
	clap2.beRepaired(1);
	clap2.beRepaired(1);
	clap2.attack(name);
	clap.takeDamage(20);
	clap2.attack(name);
	clap.takeDamage(20);
	clap2.attack(name);
	clap.takeDamage(20);
	clap2.attack(name);
	clap.takeDamage(20);
	clap2.attack(name);
	clap.takeDamage(20);
	clap2.attack(name);
	clap.takeDamage(20);
	
	return (0);
}