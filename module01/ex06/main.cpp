/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:13:43 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/25 10:33:37 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Harl.hpp"

int	get_level(int argc, char *argv[])
{
	std::string str[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	
	if (argc != 2)
		return (0);
	for (int i = 0; i < 4; i++)
		if (str[i] == argv[1])
			return (i + 1);
	return (0);
}

int main(int argc, char *argv[])
{
	Harl harl;
	int i;
	
	i = get_level(argc, argv);
	switch (i)
	{
		case (0):
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case (1):
			harl.complain("DEBUG");
		case (2):
			harl.complain("INFO");
		case (3):
			harl.complain("WARNING");
		case (4):
			harl.complain("ERROR");
	}
	return (0);
}