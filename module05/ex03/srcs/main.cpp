/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 09:26:54 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/04 10:36:40 by lgiband          ###   ########.fr       */
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
#include "Intern.hpp"

int	main(void)
{
	std::srand(std::time(0));
	Bureaucrat	boss = Bureaucrat("Boss", 1);
	Bureaucrat	chef = Bureaucrat("Chef", 50);
	Bureaucrat	worker = Bureaucrat("Worker", 100);
	Bureaucrat	slave = Bureaucrat("Slave", 150);

	{
		Intern someRandomIntern;
		Form* rrf;
		Form* rrf2;
		Form* rrf3;
		Form* rrf4;
		Form* rrf5;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf2 = someRandomIntern.makeForm("presidential pardon", "Bender");
		rrf3 = someRandomIntern.makeForm("shrubbery creation", "Bender");
		rrf4 = someRandomIntern.makeForm("other", "Bender");
		rrf5 = someRandomIntern.makeForm("", "Bender");
		(void)rrf4;
		(void)rrf5;
		try
		{
			boss.signForm(*rrf);
			boss.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			boss.signForm(*rrf2);
			boss.executeForm(*rrf2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			boss.signForm(*rrf3);
			boss.executeForm(*rrf3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}


		delete rrf;
		delete rrf2;
		delete rrf3;
	}
}