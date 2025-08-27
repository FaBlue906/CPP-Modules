/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 08:56:28 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/04 13:37:07 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private :
		int	_fixedPointValue;
		static const int _fractionalBits = 8;

	public :
		Fixed();
		Fixed(const int integer);
		Fixed(const float floating);
		Fixed(const Fixed &source);
		~Fixed();

		Fixed &operator=(const Fixed &source);
		friend std::ostream &operator<<(std::ostream &out, const Fixed &source);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;
};

#endif
