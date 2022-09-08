/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:42:07 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/05 12:45:04 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "iter.hpp"


template <typename T>
void	t_print(T &c)
{
	std::cout << c << " ";
}

void	t_print_int(int &c)
{
	std::cout << c << " ";
}

int main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	iter(tab, 10, t_print);
	iter(tab, 10, t_print_int);
	std::cout << std::endl;

	char	str[] = "abcdefghi";
	iter(str, 10, t_print);
	std::cout << std::endl;
	
	double	dtab[10] = {0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5};
	iter(dtab, 10, t_print);
	std::cout << std::endl;

	float	ftab[10] = {0.3f, 1.3f, 2.3f, 3.3f, 4.3f, 5.3f, 6.3f, 7.3f, 8.3f, 9.3f};
	iter(ftab, 10, t_print);
	std::cout << std::endl;

	std::string	stab[10] = {"oui", "non", "pourquoi", "voila", "ainsi", "conclu", "avec", "histoire", "biensur", "mais"};
	iter(stab, 10, t_print);
	std::cout << std::endl;
	return (0);
}