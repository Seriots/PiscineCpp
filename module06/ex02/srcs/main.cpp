/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:42:07 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/05 12:17:22 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include <cstdlib>
#include <ctime>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "D.hpp"

Base *generate(void)
{
	int		rand_nb;
	Base	*base;

	rand_nb = rand() % 4;
	if (rand_nb == 0)
	{	
		base = new A;
		std::cout << "Generate base A" << std::endl;
	}
	else if (rand_nb == 1)
	{	
		base = new B;
		std::cout << "Generate base B" << std::endl;
	}
	else if (rand_nb == 2)
	{	
		base = new C;
		std::cout << "Generate base C" << std::endl;
	}
	else
	{	
		base = new D;
		std::cout << "Generate base D" << std::endl;
	}
	return (base);
}

void	identify(Base *ptr)
{
	try
	{
		A &a = dynamic_cast<A &>(*ptr);
		(void)a;
		std::cout << "Identify base A" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B &>(*ptr);
			(void)b;
			std::cout << "Ptr Identify base B" << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C &>(*ptr);
				(void)c;
				std::cout << "Ptr Identify base C" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "Ptr Identify base unknown" << std::endl;
			}
		}
	}
}

void	identify(Base &ptr)
{
	try
	{
		A &a = dynamic_cast<A &>(ptr);
		(void)a;
		std::cout << "Ref Identify base A" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B &>(ptr);
			(void)b;
			std::cout << "Ref Identify base B" << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C &>(ptr);
				(void)c;
				std::cout << "Ref Identify base C" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "Identify base unknown" << std::endl;
			}
		}
	}
}

int main(void)
{
	std::srand(std::time(0));

	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;
}