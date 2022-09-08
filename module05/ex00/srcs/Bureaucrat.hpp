/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 09:35:43 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/03 09:57:57 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <exception>
#include <string>

class Bureaucrat
{
			
	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const	&src);
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat	&operator=(Bureaucrat const &rhs);
		
		std::string	getName(void) const;
		int			getGrade(void) const;

		void		increment(void);
		void		decrement(void);

	private:
		const std::string	_name;
		int					_grade;
	
	class	GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade Too High");
			}
	};

	class	GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade Too Low");
			}
	};
};

std::ostream&	operator<<(std::ostream &out, Bureaucrat const &rhs);
