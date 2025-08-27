/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:30:50 by fbordes           #+#    #+#             */
/*   Updated: 2024/05/03 08:44:12 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>

template < typename T >
void	swap(T &a, T &b) {

	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template < typename A >
A const	&max(A const &a, A const &b) {

	return ( a > b ? a : b );
}

template < typename B >
B const	&min(B const &a, B const &b) {

	return ( a < b ? a : b );
}

#endif
