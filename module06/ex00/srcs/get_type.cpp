/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_type.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:11:37 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/04 15:24:23 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool	isChar(char *str)
{
	if (*str && !*++str)
		return (true);
	return (false);
}

bool	isInt(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == 0 && i > 0 && str[i - 1] >= '0' && str[i - 1] <= '9')
		return (true);
	return (false);
}

bool	isFloat(char *str)
{
	std::string	str2;
	int	i;

	i = 0;
	str2 = str;
	if (str2 == "nanf" || str2 == "-inff" || str2 == "+inff")
		return (true);
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '.' && i > 0 && str[i - 1] >= '0' && str[i - 1] <= '9')
		i++;
	else
		return (false);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == 'f' && i > 0 && str[i - 1] != '.')
		i++;
	else
		return (false);
	if (str[i] == 0)
		return (true);
	return (false);
}

bool	isDouble(char *str)
{
	std::string	str2;
	int	i;

	i = 0;
	str2 = str;
	if (str2 == "nan" || str2 == "-inf" || str2 == "+inf")
		return (true);
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '.' && i > 0 && str[i - 1] >= '0' && str[i - 1] <= '9')
		i++;
	else
		return (false);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == 0)
		return (true);
	return (false);
}
