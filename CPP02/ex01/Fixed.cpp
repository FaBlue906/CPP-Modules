/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 08:49:54 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/10 12:28:43 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = integer << _fractionalBits;
}

Fixed::Fixed(const float floating)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(floating * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed	&Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &source)
		this->_fixedPointValue = source.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return (float)_fixedPointValue / (1 << _fractionalBits);
}

int	Fixed::toInt(void) const
{
	return _fixedPointValue >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &source)
{
	out << source.toFloat();
	return out;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}
