/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:03:01 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/25 10:24:35 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

#include "des.hpp"

int main(void)
{
	std::ifstream infile;
	std::ofstream outfile;

	std::cout << "---------------Test 1---------------" << std::endl;
	if (openfile(infile, outfile, (char *)"tests/test1.txt"))
		return (1);
	sed_fonction(infile, outfile, "pomme", "orange");
	infile.close();
	outfile.close();

	std::cout << "---------------Test 2---------------" << std::endl;
	if (openfile(infile, outfile, (char *)"tests/test2.txt"))
		return (1);
	sed_fonction(infile, outfile, "po", "ici");
	infile.close();
	outfile.close();

	std::cout << "---------------Test 3---------------" << std::endl;
	if (openfile(infile, outfile, (char *)"tests/test3.txt"))
		return (1);
	sed_fonction(infile, outfile, "e", "i");
	infile.close();
	outfile.close();

	std::cout << "---------------Test 4---------------" << std::endl;
	if (openfile(infile, outfile, (char *)"tests/test4.txt"))
		return (1);
	sed_fonction(infile, outfile, "", "apple");
	infile.close();
	outfile.close();

	std::cout << "---------------Test 5---------------" << std::endl;
	if (openfile(infile, outfile, (char *)"tests/test5.txt"))
		return (1);
	sed_fonction(infile, outfile, "\n", "apple");
	infile.close();
	outfile.close();

	std::cout << "---------------Test 6---------------" << std::endl;
	if (!openfile(infile, outfile, (char *)"trottoir.txt"))
		sed_fonction(infile, outfile, "\n", "apple");

	std::cout << "---------------Test 7---------------" << std::endl;
	if (openfile(infile, outfile, (char *)"tests/test7.txt"))
		return (1);
	sed_fonction(infile, outfile, "a", "b");
	infile.close();
	outfile.close();

	std::cout << "---------------Test 8---------------" << std::endl;
	if (openfile(infile, outfile, (char *)"tests/test8.txt"))
		return (1);
	sed_fonction(infile, outfile, "a", "");
	infile.close();
	outfile.close();

	std::cout << "---------------Test 9---------------" << std::endl;
	if (openfile(infile, outfile, (char *)(char *)"tests/test9.txt"))
		return (1);
	sed_fonction(infile, outfile, "a", "aa");
	infile.close();
	outfile.close();
	std::cout << "Check results files!" << std::endl;
	return (0);
}