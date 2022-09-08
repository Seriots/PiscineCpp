/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:58:52 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/26 13:59:55 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &cpy);
		Fixed(int const &value);
		Fixed(float const &value);
		~Fixed(void);
		
		void	operator=(Fixed const &cpy);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	
	private:
		int					Value;
		static const int	nbBits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
