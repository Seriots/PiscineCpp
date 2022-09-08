/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:17:25 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/04 10:22:59 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern	&operator=(Intern const &rhs);

		Form	*makeForm(std::string const &form_name, std::string const &target);

	private:
		Form	*makeRobotomyRequest(std::string const &target);
		Form	*makePresidentialPardon(std::string const &target);
		Form	*makeShrubberyCreation(std::string const &target);
};