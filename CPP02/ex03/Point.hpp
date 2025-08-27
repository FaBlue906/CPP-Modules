/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:23:30 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/05 08:50:35 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	private :
		const Fixed _x;
		const Fixed _y;

	public :
		Point();
		Point(const float x, const float y);
		Point(const Point &src);
		~Point();

//		Point&	operator=(const Point &src);

		Fixed getX(void) const;
		Fixed getY(void) const;
		friend std::ostream &operator<<(std::ostream &out, const Point &point);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
