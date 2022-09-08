/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:58:33 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/02 14:13:57 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "AMateria.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		if (src._inventory[i] != NULL)
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
		i++;
	}	
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	return ;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (rhs._inventory[i] != NULL)
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
		i++;
	}	
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	while (i < 4)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
		i++;
	}
	delete m;
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (i < 4)
	{
		if (_inventory[i] != NULL && _inventory[i]->getType() == type)
			return _inventory[i]->clone();
		i++;
	}
	return NULL;
}