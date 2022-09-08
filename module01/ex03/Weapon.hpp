/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:59:40 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/25 10:18:36 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		void				setType(std::string type);
		const std::string&	getType(void);
	private:
		std::string	type;
};