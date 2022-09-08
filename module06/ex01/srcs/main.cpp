/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:42:07 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/05 12:18:21 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

#include "data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data *data = new Data;
	data->s = "Hello World";
	data->n = 42;
	data->f = 42.42f;
	data->d = 42.42;
	data->c = 'A';
	std::cout << "data->s = " << data->s << std::endl;
	std::cout << "data->n = " << data->n << std::endl;
	std::cout << "data->f = " << data->f << std::endl;
	std::cout << "data->d = " << data->d << std::endl;
	std::cout << "data->c = " << data->c << std::endl;
	uintptr_t raw = serialize(data);
	Data *data2 = deserialize(raw);
	std::cout << "data2->s = " << data2->s << std::endl;
	std::cout << "data2->n = " << data2->n << std::endl;
	std::cout << "data2->f = " << data2->f << std::endl;
	std::cout << "data2->d = " << data2->d << std::endl;
	std::cout << "data2->c = " << data2->c << std::endl;
	delete data;
	return (0);
}