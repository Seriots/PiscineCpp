/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 13:47:24 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/03 13:47:51 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <string>

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);

		virtual void	runExecute(Bureaucrat const & executor) const;

	private:
		const std::string	_target;

};	
