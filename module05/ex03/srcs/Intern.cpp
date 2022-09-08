/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:17:32 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/04 10:37:16 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const &src)
{
	*this = src;
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Form *Intern::makeRobotomyRequest (std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::makePresidentialPardon (std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeShrubberyCreation (std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(std::string const &form_name, std::string const &target)
{
	std::string	form_names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form	*(Intern::*functions[3])(const std::string&) = {&Intern::makeRobotomyRequest, &Intern::makePresidentialPardon, &Intern::makeShrubberyCreation};

	for (int i = 0; i < 3; i++)
	{
		if (form_name == form_names[i])
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return ((this->*functions[i])(target));
		}
	}
	std::cout << "Intern can't create " << form_name << std::endl;
	return (NULL);
}


