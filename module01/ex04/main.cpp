/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:53:45 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/24 15:05:20 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#include "des.hpp"

int	main(int argc, char *argv[])
{
	std::ifstream infile;
	std::ofstream outfile;

	if (argc != 4)
	{
		std::cout << "Usage: ./des <filename> <s1> <s2>" << std::endl;
		return (0);
	}
	if (openfile(infile, outfile, argv[1]))
		return (1);
	sed_fonction(infile, outfile, argv[2], argv[3]);
	infile.close();
	outfile.close();
	return (0);
}