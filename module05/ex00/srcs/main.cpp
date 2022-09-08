/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 09:26:54 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/03 11:42:25 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	boss = Bureaucrat("Boss", 1);
	Bureaucrat	chef = Bureaucrat("Chef", 50);
	Bureaucrat	worker = Bureaucrat("Worker", 100);
	Bureaucrat	slave = Bureaucrat("Slave", 150);

	try
	{
		Bureaucrat	random = Bureaucrat("random", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	superman = Bureaucrat("superman", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		slave.decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		boss.increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << worker << std::endl;
	std::cout << chef << std::endl;
	worker.increment();
	chef.decrement();
	std::cout << worker << std::endl;
	std::cout << chef << std::endl;
}