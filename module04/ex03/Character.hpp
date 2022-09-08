/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:24:26 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/01 21:30:56 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string 	_name;
		AMateria		*_inventory[4];
		AMateria		**_trash;
		int				_trash_size;
		int				_trash_count;
		void			init_trash(void);

	public:
		Character(void);
		Character(std::string const & name);
		Character(Character const &src);
		virtual ~Character(void);
		Character &operator=(Character const &rhs);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

};