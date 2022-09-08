/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 09:26:54 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/04 10:11:12 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>
#include <ctime>
#include <cstdlib>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	std::srand(std::time(0));
	Bureaucrat	boss = Bureaucrat("Boss", 1);
	Bureaucrat	chef = Bureaucrat("Chef", 50);
	Bureaucrat	worker = Bureaucrat("Worker", 100);
	Bureaucrat	slave = Bureaucrat("Slave", 150);

	{		
		ShrubberyCreationForm	shrub =	ShrubberyCreationForm("home");
		PresidentialPardonForm	pres = 	PresidentialPardonForm("Random guy");
		RobotomyRequestForm		robot =	RobotomyRequestForm("robot");

		std::cout << "==================Basic Test===================" << std::endl;
		try
		{
			boss.signForm(shrub);
			boss.executeForm(shrub);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			boss.signForm(pres);
			boss.executeForm(pres);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			boss.signForm(robot);
			boss.executeForm(robot);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "===================================================" << std::endl << std::endl;
	std::cout << "==================ExceptionTest====================" << std::endl;

	{	
		ShrubberyCreationForm	shrub =	ShrubberyCreationForm("home");
		PresidentialPardonForm	pres = 	PresidentialPardonForm("Random guy");
		RobotomyRequestForm		robot =	RobotomyRequestForm("robot");
		try
		{
			chef.executeForm(shrub);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			chef.executeForm(pres);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			chef.executeForm(robot);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			slave.signForm(shrub);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			slave.signForm(pres);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			slave.signForm(robot);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
		try
		{
			boss.signForm(shrub);
			slave.executeForm(shrub);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			boss.signForm(pres);
			slave.executeForm(pres);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			boss.signForm(robot);
			slave.executeForm(robot);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		//chmod 000 home_shrubbery
	}
	std::cout << "===================================================" << std::endl << std::endl;
	std::cout << "==================GradeTest====================" << std::endl;
	{
		ShrubberyCreationForm	shrub =	ShrubberyCreationForm("home");
		PresidentialPardonForm	pres = 	PresidentialPardonForm("Random guy");
		RobotomyRequestForm		robot =	RobotomyRequestForm("robot");
		std::cout << "========Shrubbery======" << std::endl;
		try
		{
			slave.signForm(shrub);
			worker.signForm(shrub);
			chef.signForm(shrub);
			boss.signForm(shrub);

			slave.executeForm(shrub);
			worker.executeForm(shrub);
			chef.executeForm(shrub);
			boss.executeForm(shrub);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "========president======" << std::endl;
		try 
		{
			slave.signForm(pres);
			worker.signForm(pres);
			chef.signForm(pres);
			boss.signForm(pres);

			slave.executeForm(pres);
			worker.executeForm(pres);
			chef.executeForm(pres);
			boss.executeForm(pres);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "========Robotomize======" << std::endl;
		try
		{
			slave.signForm(robot);
			worker.signForm(robot);
			chef.signForm(robot);
			boss.signForm(robot);

			slave.executeForm(robot);
			worker.executeForm(robot);
			chef.executeForm(robot);
			boss.executeForm(robot);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}
}