/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:20:17 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/05 10:04:00 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>

int	convertChar(char *str)
{
	char	c = str[0];
	
	std::cout
	<< "char: '" << (c) << "'" << std::endl
	<< "int: " << static_cast<int>(c) << std::endl
	<< "float: " << std::setprecision(1) << std::fixed << static_cast<float>(c) << "f" << std::endl
	<< "double: " << std::setprecision(1) << std::fixed << static_cast<double>(c) << std::endl;
	return(0);
}

int	convertInt(char *str)
{
	long	c = std::strtol(str, 0, 10);
	
	if (c < 32 || c > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
	if (c > 2147483647 || c < -2147483648)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(c) << std::endl;
	return(0);
}

int	convertFloat(char *str)
{
	std::string	tmp = str;
	double	c = std::atof(str);
	float	f = static_cast<float>(c);

	if (tmp == "+inff")
	{
		std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return (0);
	}
	else if (tmp == "-inff")
	{
		std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return (0);
	}
	else if (tmp == "nanf")
	{
		std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (0);
	}
	else
	{
		if (c < 32 || c > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
		
		if (c > 2147483647 || c < -2147483648)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(c) << std::endl;
		if (f == std::numeric_limits<float>::quiet_NaN())
			std::cout << "float: nanf" << std::endl;
		else if (f != std::numeric_limits<float>::infinity() && f != -std::numeric_limits<float>::infinity())
			std::cout << "float: " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
		else
			std::cout << "float: impossible" << std::endl;
		if (c == std::numeric_limits<double>::quiet_NaN())
			std::cout << "double: nan" << std::endl;
		else
			std::cout << "double: " << std::setprecision(1) << std::fixed << c << std::endl;
	}
	return(0);
}

int	convertDouble(char *str)
{
	std::string	tmp = str;
	double	c = std::atof(str);
	float	f = static_cast<float>(c);

	if (tmp == "+inf")
	{
		std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return (0);
	}
	else if (tmp == "-inf")
	{
		std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return (0);
	}
	else if (tmp == "nan")
	{
		std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (0);
	}
	else
	{
		if (c < 32 || c > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
		
		if (c > 2147483647 || c < -2147483648)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(c) << std::endl;
		if (f == std::numeric_limits<float>::quiet_NaN())
			std::cout << "float: nanf" << std::endl;
		else if (f != std::numeric_limits<float>::infinity() && f != -std::numeric_limits<float>::infinity())
			std::cout << "float: " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
		else
			std::cout << "float: impossible" << std::endl;
		if (c == std::numeric_limits<double>::quiet_NaN())
			std::cout << "double: nan" << std::endl;
		else
			std::cout << "double: " << std::setprecision(1) << std::fixed << c << std::endl;
	}
	return(0);
}