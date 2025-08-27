/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:29:19 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/05 08:53:25 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	//std::cout << "Point default contructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	//std::cout << "Point float constructor called" << std::endl;
}

Point::Point(const Point &src) : _x(src._x), _y(src._y)
{
	//std::cout << "Point copy constructor called" << std::endl;
}

Point::~Point()
{
	//std::cout << "Point destructor called" << std::endl;
}

/*
Point&	Point::operator=(const Point &source)
{
	if (this != &source)
	{
		//const_cast<Fixed&>(this->_x) = source.getX();
		//const_cast<Fixed&>(this->_y) = source.getY();
		(Fixed) this->_x = source.getX();
		(Fixed) this->_y = source.getY();
	}
	return *this;
}*/

Fixed	Point::getX(void) const
{
	return this->_x;
}

Fixed	Point::getY(void) const
{
	return this->_y;
}

std::ostream &operator<<(std::ostream &out, const Point &point)
{
	out << "P(" << point.getX() << ", " << point.getY() << ")";
	return out;
}
