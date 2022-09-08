/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:59:00 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/07 10:28:57 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Span.hpp"

int main(void)
{
	std::srand(std::time(NULL));
	Span sp = Span(5);
	std::cout << "-------------------Subject Test-------------------" << std::endl;
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::cout << std::endl << "-------------------Exception-------------------" << std::endl;
	Span	sp2 = Span(5);
	try
	{
		sp.addNumber(11);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	sp2.addNumber(11);
	try
	{
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << "-------------------10000span-------------------" << std::endl;
	Span	sp3 = Span(10000);
	for (int i = 0; i < 10000; i++)
		sp3.addNumber(rand() % 100000000);
	Span	sp5 = Span(10000);
	for (int i = 0; i < 10000; i++)
		sp5.addNumber(rand() % 100000000);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
	Span	sp4(sp3);
	sp = sp3;
	std::cout << std::endl << "-------------------copy-------------------" << std::endl;
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
	
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::cout << std::endl << "-------------------copy2-------------------" << std::endl;
	sp3 = sp5;
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
	
	std::cout << sp5.shortestSpan() << std::endl;
	std::cout << sp5.longestSpan() << std::endl;
	
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl << "-------------------Multiplenumber-------------------" << std::endl;
	
	std::vector<int>	v;
	Span				sp6(100);

	for (int i = 0; i < 100; i++)
		v.push_back(i);
	try
	{
		sp6.addNumber(v.begin(), v.end());
		std::cout << sp6.shortestSpan() << std::endl;
		std::cout << sp6.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Span				sp7(100);
	v.push_back(400);
	try
	{
		sp7.addNumber(v.begin(), v.end());
		std::cout << sp6.shortestSpan() << std::endl;
		std::cout << sp6.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}