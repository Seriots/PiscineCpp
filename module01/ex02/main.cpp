/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:54:57 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/24 12:57:40 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";	
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << std::left << std::setfill(' ') << std::setw(20) << "Adress string: " << &string << std::endl;
	std::cout << std::left << std::setfill(' ') << std::setw(20) << "Adress stringPTR: " << stringPTR << std::endl;
	std::cout << std::left << std::setfill(' ') << std::setw(20) << "Value stringREF: " << &stringREF << std::endl;
	
	std::cout << std::endl << "----------------------" << std::endl << std::endl;
	
	std::cout << std::left << std::setfill(' ') << std::setw(20) << "Value string: " << string << std::endl;
	std::cout << std::left << std::setfill(' ') << std::setw(20) << "Value stringPTR: " << *stringPTR << std::endl;
	std::cout << std::left << std::setfill(' ') << std::setw(20) << "Adress stringREF: " << stringREF << std::endl;
	
	return (0);
}