/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:10:33 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/31 10:13:56 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::string name = "Michel";
	std::string name2 = "Bob";
	std::string name3 = "John";

	FragTrap clap(name);
	FragTrap clap2(name2);
	FragTrap clap3;
	FragTrap clap4(clap);

	clap3 = clap;
	clap2.highFivesGuys();
	clap2.beRepaired(1);
	clap2.beRepaired(1);
	clap2.takeDamage(10);
	clap2.beRepaired(1);
	clap2.beRepaired(1);
	clap2.attack(name);
	clap.takeDamage(30);
	clap2.attack(name);
	clap.takeDamage(30);
	clap2.attack(name);
	clap.takeDamage(30);
	clap2.attack(name);
	clap.takeDamage(30);
	clap2.attack(name);
	clap.takeDamage(30);
	clap2.attack(name);
	clap.takeDamage(30);
	
	return (0);
}