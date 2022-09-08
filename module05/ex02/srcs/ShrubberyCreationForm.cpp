/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 13:26:24 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/04 09:55:14 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), _target("default")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): Form(src), _target(src._target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

const char	*ShrubberyCreationForm::FileOpenException::what() const throw()
{
	return ("File open error");
}

void	ShrubberyCreationForm::runExecute(Bureaucrat const & executor) const
{
	std::ofstream	ofs((this->_target + "_shrubbery").c_str());

	(void)executor;
	if (!ofs.is_open())
		throw ShrubberyCreationForm::FileOpenException();
	ofs << "		 *" << std::endl;
	ofs << "         |" << std::endl;
	ofs << " 		(|)" << std::endl;
	ofs << "	   ((|))" << std::endl;
	ofs << "	  (((|)))" << std::endl;
	ofs << "	 ((((|))))" << std::endl;
	ofs << "    (((((|)))))" << std::endl;
	ofs << "   ((((((|))))))" << std::endl;
	ofs << "  (((((((|)))))))" << std::endl;
	ofs << " ((((((((|))))))))" << std::endl;
	ofs << "(((((((((|)))))))))" << std::endl;
	ofs << "		|||" << std::endl;
	ofs << std::endl;
	ofs << "	<>" << std::endl;
	ofs << "   //\\\\" << std::endl;
	ofs << "  //**\\\\" << std::endl;
	ofs << " //*o**\\\\" << std::endl;
	ofs << "//******\\\\" << std::endl;
	ofs << "\\\\****o*//" << std::endl;
	ofs << "//******\\\\" << std::endl;
	ofs << "\\\\*o****//" << std::endl;
	ofs << " \\\\****//" << std::endl;
	ofs << "  \\\\**//" << std::endl;
	ofs << "   ||||" << std::endl;
	ofs << "   ||||" << std::endl;
	ofs.close();
}
