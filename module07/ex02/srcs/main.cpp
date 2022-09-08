/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:42:07 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/07 10:12:29 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

#include "Array.hpp"
#include "Array.tpp"

void print_array_const(const Array<int> arr) {
	//arr[2] = 4;
	for (size_t i = 0; i < arr.size(); ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

void print_array(Array<int> arr) {
	arr[2] = 4;
	for (size_t i = 0; i < arr.size(); ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int main(void)
{
	{
		std::cout  << std::endl << "--------------Int---------------" << std::endl;
		Array<int>		a(5);
		
		try
		{
			a[0] = 5;
			std::cout << "a[0] = " << a[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			a[25] = 5;
			std::cout << "a[25] = " << a[25] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "a[25] = "<< e.what() << '\n';
		}

		try
		{
			std::cout << "a[5] = " << a[5] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		Array<int>	b(a);
		std::cout << "Copy b(a)" << std::endl;

		try
		{
			std::cout << "b[0] = " << b[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			b[1] = 98;
			
			std::cout << "a[1] = " << a[1] << std::endl;
			std::cout << "b[1] = " << b[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		Array<int>	c = b;
		std::cout << "c = b" << std::endl;

		try
		{
			std::cout << "c[1] = " << c[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			c[1] = 28;
			std::cout << "b[1] = " << b[1] << std::endl;
			std::cout << "c[1] = " << c[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		std::cout << "c.size() = " << c.size() << std::endl;
		
	}
	{
		std::cout  << std::endl << "--------------Float---------------" << std::endl;
		Array<float>		a(5);
		
		try
		{
			a[0] = 5.5f;
			std::cout << "a[0] = " << a[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			a[25] = 5.5f;
			std::cout << "a[25] = " << a[25] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "a[25] = "<< e.what() << '\n';
		}

		try
		{
			std::cout << "a[5] = " << a[5] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		Array<float>	b(a);
		std::cout << "Copy b(a)" << std::endl;

		try
		{
			std::cout << "b[0] = " << b[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			b[1] = 98.5f;
			
			std::cout << "a[1] = " << a[1] << std::endl;
			std::cout << "b[1] = " << b[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		Array<float>	c = b;
		std::cout << "c = b" << std::endl;

		try
		{
			std::cout << "c[1] = " << c[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			c[1] = 28.5f;
			std::cout << "b[1] = " << b[1] << std::endl;
			std::cout << "c[1] = " << c[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		std::cout << "c.size() = " << c.size() << std::endl;
		
	}
	{
		std::cout  << std::endl << "--------------String---------------" << std::endl;
		Array<std::string>		a(5);
		
		try
		{
			a[0] = "oui";
			std::cout << "a[0] = " << a[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			a[25] = "non";
			std::cout << "a[25] = " << a[25] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "a[25] = "<< e.what() << '\n';
		}

		try
		{
			std::cout << "a[5] = " << a[5] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		Array<std::string>	b(a);
		std::cout << "Copy b(a)" << std::endl;

		try
		{
			std::cout << "b[0] = " << b[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			b[1] = "pourquoi";
			
			std::cout << "a[1] = " << a[1] << std::endl;
			std::cout << "b[1] = " << b[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		Array<std::string>	c = b;
		std::cout << "c = b" << std::endl;

		try
		{
			std::cout << "c[1] = " << c[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			c[1] = "mais";
			std::cout << "b[1] = " << b[1] << std::endl;
			std::cout << "c[1] = " << c[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		std::cout << "c.size() = " << c.size() << std::endl;
		
	}
	Array<int> arr(3);
	arr[1]=42;
	print_array(arr);
	print_array_const(arr);

	Array<int>	arr4;

	try
	{
		arr4[0] = 1;
		std::cout << arr4[0] << std::endl;
		arr4[1] = 2;
		std::cout << arr4[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return (0);
}
/*
#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
		std::cout << "test[0] = " << test[0] << std::endl;
		std::cout << "test[1] = " << test[1] << std::endl;
		
		std::cout << "tmp[0] = " << tmp[0] << std::endl;
		std::cout << "tmp[1] = " << tmp[1] << std::endl;

		std::cout << "numbers[0] = " << numbers[0] << std::endl;
		std::cout << "numbers[1] = " << numbers[1] << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}*/