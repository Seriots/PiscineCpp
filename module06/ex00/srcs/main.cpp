/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:42:07 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/04 15:51:26 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "get_type.hpp"
#include "convert.hpp"

int	getType(char *str)
{
	if (isInt(str))
		return (convertInt(str));
	else if (isChar(str))
		return (convertChar(str));
	else if (isFloat(str))
		return (convertFloat(str));
	else if (isDouble(str))
		return (convertDouble(str));
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 2 || argv[1][0] == 0)
		return (0);
	getType(argv[1]);
	return (0);
}