/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:08:17 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/26 15:03:51 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point a(1.0, 0.0);
	Point b(0.0, 0.0);
	Point c(0.0, 1.0);

	Point d(2.0, 0.5);
	Point e(-0.5, 1.5);
	Point f(0.0, -1.0);
	
	std::cout << "a: " << a.getX() << " " << a.getY() << std::endl;
	std::cout << "b: " << b.getX() << " " << b.getY() << std::endl;
	std::cout << "c: " << c.getX() << " " << c.getY() << std::endl << std::endl;
	

	std::cout << "true: " << true << std::endl;
	std::cout << "false: " << false << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "a: 1.0, 0.0, b: 0.0, 0.0, c: 0.0, 1.0" << std::endl << std::endl;
	std::cout << "d = 0.6, 0.6: " << bsp(a, b, c, Point(0.6, 0.6)) << std::endl;
	std::cout << "d = 0.5, 0.5: " << bsp(a, b, c, Point(0.5, 0.5)) << std::endl;
	std::cout << "d = 0.4, 0.4: " << bsp(a, b, c, Point(0.4, 0.4)) << std::endl;
	std::cout << "d = 0.0, 0.0: " << bsp(a, b, c, Point(0.0, 0.0)) << std::endl;
	std::cout << "d = 1.0, 0.0: " << bsp(a, b, c, Point(1.0, 0.0)) << std::endl;
	std::cout << "d = 0.0, 1.0: " << bsp(a, b, c, Point(0.0, 1.0)) << std::endl;
	std::cout << "d = 1.0, 1.0: " << bsp(a, b, c, Point(1.0, 1.0)) << std::endl;
	std::cout << "d = 0.3, 0.1: " << bsp(a, b, c, Point(0.3, 0.1)) << std::endl;
	std::cout << "d = 0.0, 0.5: " << bsp(a, b, c, Point(0.0, 0.5)) << std::endl;
	std::cout << "d = 0.7, 0.25: " << bsp(a, b, c, Point(0.7, 0.25)) << std::endl;
	std::cout << "d = -0.1, 0.0: " << bsp(a, b, c, Point(-0.1, 0.0)) << std::endl;
	std::cout << "d = 0.0, -0.1: " << bsp(a, b, c, Point(0.0, -0.1)) << std::endl;
	std::cout << "d = 0.98, 0.01: " << bsp(a, b, c, Point(0.98, 0.01)) << std::endl;
	std::cout << "d = 0.01, 0.98: " << bsp(a, b, c, Point(0.01, 0.98)) << std::endl;
	std::cout << "d = 0.99, 0.01: " << bsp(a, b, c, Point(0.99, 0.01)) << std::endl;
	std::cout << "d = 0.01, 0.99: " << bsp(a, b, c, Point(0.01, 0.99)) << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "a: 2.0, 0.5, b: -0.5, 1.5, c: 0.0, -1.0" << std::endl << std::endl;
	std::cout << "d = 0.0, 1.0: " << bsp(d, e, f, Point(0.0, 1.0)) << std::endl;
	std::cout << "d = 1.5, 0.5: " << bsp(d, e, f, Point(1.0, 0.5)) << std::endl;
	std::cout << "d = -0.1, -0.1: " << bsp(d, e, f, Point(-0.1, -0.1)) << std::endl;
	std::cout << "d = -0.5, -0.5: " << bsp(d, e, f, Point(-0.5, -0.5)) << std::endl;
	std::cout << "d = 2.0, 0.5: " << bsp(d, e, f, Point(2.0, 0.5)) << std::endl;
	return (0);
}