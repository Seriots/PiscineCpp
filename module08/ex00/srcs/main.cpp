/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:09:47 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/07 15:42:15 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <iostream>


#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	std::cout << easyfind(v, 3) << std::endl;

	std::vector<int> v5;
	try	
	{
		std::cout << easyfind(v5, 3) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	std::cout << easyfind(l, 3) << std::endl;

	std::vector<int> v2;

	for (int i = 0; i < 100; i++)
		v2.push_back(i);
	try
	{
		std::cout << easyfind(v2, -1) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	try
	{
		std::cout << easyfind(v2, 101) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	try
	{
		std::cout << easyfind(v2, 99) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	return (0);
}