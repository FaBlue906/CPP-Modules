/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 08:45:04 by fbordes           #+#    #+#             */
/*   Updated: 2024/05/03 08:45:05 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class NoneExistentException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Couldn't find occurence.");
		};
};

template <typename T> 
typename T::iterator	easyfind(T &cont, int n)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), n);
	if (it == cont.end())
		throw NoneExistentException();
	return (it);
}

#endif