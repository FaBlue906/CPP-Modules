/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:41:28 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/05 08:52:23 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	abs(Fixed x)
{
	if (x < 0)
		return x * -1;
	return x;
}

static Fixed	area(Point const a, Point const b, Point const c)
{
	return ( ( (a.getX() * (b.getY() - c.getY() ) ) +
		(b.getX() * (c.getY() - a.getY() ) ) +
		(c.getX() * (a.getY() - b.getY() ) ) ) / 2);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	abcArea = abs(area(a,b,c));
	Fixed	pabArea = abs(area(point, a, b));
	Fixed	pbcArea = abs(area(point, b, c));
	Fixed	pcaArea = abs(area(point, c, a));

	return (abcArea == pabArea + pbcArea + pcaArea);
}
