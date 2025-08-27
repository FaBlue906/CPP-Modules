/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 08:24:03 by fbordes           #+#    #+#             */
/*   Updated: 2024/05/03 08:44:32 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cstring>

template < typename T, typename A >
void	iter(T *addr_array, A len_array, void (*f)(T &)) {

	for (A i = 0; i < len_array; i++) {

		f(addr_array[i]);
	}

	return;
}
#endif
