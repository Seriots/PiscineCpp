/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 09:26:54 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/03 12:34:45 by lgiband          ###   ########.fr       */
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
	std::cout << "===================================================" << std::endl << std::endl;
	chef.increment();
	worker.decrement();
	Form	equal_contract = Form("Contract", 50, 50);
	Form	slavery_contract = Form("SlavContract", 150, 150);
	Form	misunderstanding_contract = Form("MisunderstandingContract", 23, 140);

	try
	{
		Form	r1 = Form("r1", 151, 150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form	r2 = Form("r2", 150, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form	r3 = Form("r3", 1, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form	r4 = Form("r4", 0, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << equal_contract << std::endl;
	try
	{
		equal_contract.beSigned(slave);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << equal_contract << std::endl;
	try
	{
		equal_contract.beSigned(worker);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << equal_contract << std::endl;
	try
	{
		equal_contract.beSigned(chef);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << equal_contract << std::endl;

	std::cout << slavery_contract << std::endl;
	try
	{
		boss.signForm(slavery_contract);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << slavery_contract << std::endl;
	std::cout << misunderstanding_contract << std::endl;
	
	try
	{
		slave.signForm(misunderstanding_contract);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << misunderstanding_contract << std::endl;
	std::cout << "===================================================" << std::endl << std::endl;
	
}