/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:50:31 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/04 10:13:45 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Form;
#include "Bureaucrat.hpp"

class Form
{
	public:
		Form(void);
		Form(Form const &src);
		Form(const std::string &name, int grade_to_sign, int grade_to_execute);
		~Form();

		Form	&operator=(Form const &rhs);
		void	beSigned(Bureaucrat const &bureaucrat);
		void	execute(Bureaucrat const & executor) const; 
		virtual void	runExecute(Bureaucrat const & executor) const = 0;
			
		std::string	getName(void) const;
		bool		getIsSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;

	private:
		std::string const 	_name;
		int					_is_signed;
		int	const			_grade_to_sign;
		int	const			_grade_to_execute;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class NotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class AlreadySignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &out, Form const &rhs);