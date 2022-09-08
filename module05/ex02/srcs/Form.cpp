/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:50:26 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/04 10:13:29 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Form.hpp"

Form::Form(void) : _name("default"), _is_signed(0), _grade_to_sign(1), _grade_to_execute(1)
{
	return ;
}

Form::Form(Form const &src) : _name(src.getName()), _is_signed(src.getIsSigned()), _grade_to_sign(src.getGradeToSign()), _grade_to_execute(src.getGradeToExecute())
{
	return ;
}

Form::Form(const std::string &name, int grade_to_sign, int grade_to_execute) : _name(name), _is_signed(0), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw Form::GradeTooHighException();
	else if (grade_to_sign > 150 || grade_to_execute > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form()
{
	return ;
}

Form	&Form::operator=(Form const &rhs)
{
	_is_signed = rhs.getIsSigned();
	return (*this);
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _grade_to_sign)
		throw Form::GradeTooLowException();
	if (_is_signed)
		throw Form::AlreadySignedException();
	else
		_is_signed = 1;
}

std::string	Form::getName(void) const
{
	return (_name);
}

bool		Form::getIsSigned(void) const
{
	return (_is_signed);
}

int			Form::getGradeToSign(void) const
{
	return (_grade_to_sign);
}

int			Form::getGradeToExecute(void) const
{
	return (_grade_to_execute);
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (_is_signed == 0)
		throw Form::NotSignedException();
	else if (executor.getGrade() > _grade_to_execute)
		throw Form::GradeTooLowException();
	std::cout << executor.getName() << " executes " << this->getName() << std::endl;
	this->runExecute(executor);
	
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Form::AlreadySignedException::what() const throw()
{
	return ("Form already signed");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char *Form::NotSignedException::what() const throw()
{
	return ("Form is not already signed");
}

std::ostream	&operator<<(std::ostream &out, Form const &rhs)
{
	out << "Form " << rhs.getName() << " is signed: " << rhs.getIsSigned() << " and has a grade to sign of " << rhs.getGradeToSign() << " and a grade to execute of " << rhs.getGradeToExecute();
	return (out);
}