/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 08:24:16 by fbordes           #+#    #+#             */
/*   Updated: 2024/05/03 08:44:44 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template< typename T >
class Array
{
	private :
		T				*_arr;
		unsigned int	_length;
	public :
		Array();
		Array(unsigned int n);
		~Array();

		Array(Array const &ref_arr);
		Array<T>	&operator=(const Array<T> &ref_arr);

		unsigned int	size() const;

		T			&operator[](int n);
		const T		&operator[](int n) const;

		class	OutOfBounds : public std::exception
		{
			public :
				virtual char const	*what() const throw() {return("Out of Bounds...");};
		};
};

#endif

#include "Array.tpp"
