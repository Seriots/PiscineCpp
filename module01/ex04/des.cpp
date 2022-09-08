/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   des.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:03:38 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/24 15:03:59 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	is_sed(std::string str, std::string s1, int *i)
{
	if (!s1.size())
		return (0);
	if (str.find(s1) == 0)
	{
		*i += s1.length();
		return (1);
	}
	return (0);
}

int sed_fonction(std::ifstream &infile, std::ofstream &outfile, std::string s1, std::string s2)
{
	char line[4];
	std::string entire_line;
	char	value;
	int		i = 0;

	while (1)
	{
		value = infile.peek();
		infile.read(line, 1);
		if (value == EOF)
			break ;
		entire_line += value;
	}
	while (i < (int)entire_line.length())
	{
		if (!is_sed(&entire_line[i], s1, &i))
			outfile << entire_line[i++];
		else
			outfile << s2;
	}
	return (0);
}

int	openfile(std::ifstream &infile, std::ofstream &outfile, char *filename)
{
	std::string	outname;

	infile.open(filename);
	if (!infile.is_open())
	{
		std::cout << "Error: file " << filename << " not found" << std::endl;
		return (1);
	}
	outname = filename + std::string(".replace");
	outfile.open(const_cast<char*>(outname.c_str()), std::ios::out);
	if (!outfile.is_open())
	{
		std::cout << "Error: file " << filename << " not found" << std::endl;
		infile.close();
		return (1);
	}
	return (0);
}
