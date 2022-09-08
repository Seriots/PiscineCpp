/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:11:26 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/01 19:12:47 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(std::string const & type);
		Cure(Cure const &src);
		virtual ~Cure();
		Cure &operator=(Cure const &rhs);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);		
};
