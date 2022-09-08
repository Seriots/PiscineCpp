/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   des.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:04:23 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/24 15:05:12 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DES_HPP
# define DES_HPP

#include <fstream>

int	openfile(std::ifstream &infile, std::ofstream &outfile, char *filename);
int sed_fonction(std::ifstream &infile, std::ofstream &outfile, std::string s1, std::string s2);
int	is_sed(std::string str, std::string s1, int *i);

#endif