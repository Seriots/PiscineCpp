/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:39:22 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/26 15:05:13 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float const w1 = (a.getX() * (c.getY() - a.getY())
					+ (point.getY() - a.getY()) * (c.getX() - a.getX())
					- point.getX() * (c.getY() - a.getY()))
					/ ((b.getY() - a.getY()) * (c.getX() - a.getX())
					- (b.getX() - a.getX()) * (c.getY() - a.getY()));
	float const w2 = (point.getY() - a.getY()
					- (w1 * (b.getY() - a.getY())))
					/ (c.getY() - a.getY());
	if (w1 > 0 && w2 > 0 && w1 + w2 < 1)
		return (true);
	return (false);
}