/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:39:46 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/30 12:31:44 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(Point const &cpy);
		Point(float &x, float &y);
		Point(float const &x, float const &y);
		~Point(void);

		void	operator=(Point const &other);

		float	getX(void) const;
		float	getY(void) const;

	private:
		Fixed const x;
		Fixed const y;		
};
