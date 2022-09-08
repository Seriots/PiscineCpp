/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:45:54 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/24 11:59:15 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
	private:
		std::string	_name;
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);