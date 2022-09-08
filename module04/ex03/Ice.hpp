/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:03:39 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/01 19:09:47 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(std::string const & type);
		Ice(Ice const &src);
		virtual ~Ice();
		Ice &operator=(Ice const &rhs);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);		
};
