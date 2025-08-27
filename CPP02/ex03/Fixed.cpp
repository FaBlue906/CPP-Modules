/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 08:49:54 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/05 08:54:03 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
	//std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = integer << _fractionalBits;
}

Fixed::Fixed(const float floating)
{
	//std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = static_cast<int>(roundf(floating * (1 << _fractionalBits)));
}

Fixed::Fixed(const Fixed &source)
{
	//std::cout << "Copy constructor called" << std::endl;
	_fixedPointValue = source._fixedPointValue;
}

Fixed	&Fixed::operator=(const Fixed &source)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &source)
		_fixedPointValue = source._fixedPointValue;
	return *this;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &source)
{
	out << static_cast<float>(source._fixedPointValue) / (1 << Fixed::_fractionalBits);
	return out;
}


bool Fixed::operator>(const Fixed &other) const
{
	return _fixedPointValue > other._fixedPointValue;
}

bool Fixed::operator<(const Fixed &other) const
{
	return _fixedPointValue < other._fixedPointValue;
}

bool Fixed::operator>=(const Fixed &other) const
{
	return _fixedPointValue >= other._fixedPointValue;
}

bool Fixed::operator<=(const Fixed &other) const
{
	return _fixedPointValue <= other._fixedPointValue;
}

bool Fixed::operator==(const Fixed &other) const
{
	return _fixedPointValue == other._fixedPointValue;
}

bool Fixed::operator!=(const Fixed &other) const
{
	return _fixedPointValue != other._fixedPointValue;
}


Fixed Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}


Fixed &Fixed::operator++()
{
	_fixedPointValue++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	_fixedPointValue++;
	return temp;
}

Fixed &Fixed::operator--()
{
	_fixedPointValue--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	_fixedPointValue--;
	return temp;
}


Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}
