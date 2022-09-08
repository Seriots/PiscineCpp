/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:42:07 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/07 10:02:03 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	const int c_a = 1;
	const int c_b = 1;
	
	std::cout << "a = " << c_a << ", b = " << c_b << std::endl;
	std::cout << "a = " << &c_a << ", b = " << &c_b << std::endl;
	std::cout << "min( a, b ) = " << &::min( c_a, c_b ) << std::endl;
	std::cout << "max( a, b ) = " << &::max( c_a, c_b ) << std::endl;
	const std::string c_c = "chaine1";
	const std::string c_d = "chaine1";
	std::cout << "c = " << c_c << ", d = " << c_d << std::endl;
	std::cout << "c = " << &c_c << ", d = " << &c_d << std::endl;
	std::cout << "min( c, d ) = " << &::min( c_c, c_d ) << std::endl;
	std::cout << "max( c, d ) = " << &::max( c_c, c_d ) << std::endl;
	return (0);
}