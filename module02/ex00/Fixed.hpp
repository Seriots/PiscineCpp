/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:58:52 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/25 12:39:44 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &cpy);
		~Fixed(void);
		
		void	operator=(Fixed const &cpy);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
	private:
		int					Value;
		static const int	nbBits = 8;
};
