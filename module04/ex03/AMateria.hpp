/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:01:18 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/02 13:20:41 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class AMateria;
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string		_type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const &src);
		virtual ~AMateria();
		AMateria &operator=(AMateria const &rhs);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
