/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 08:24:07 by fbordes           #+#    #+#             */
/*   Updated: 2024/05/03 08:44:35 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

class A
{
	private:
		int _n;
	public:
		A(void) : _n(42) {return;}
		int get(void) const {return this->_n;}
};

std::ostream & operator<<(std::ostream & o, A const & rhs)
{
	o << rhs.get();
	return o;
}

template< typename T >
void print(T& x)
{
	std::cout << x << std::endl;
	return;
}

int main() {
	const int tab[] = {0, 1, 2, 3, 4};
	A tab2[5];

	iter(tab, 5, print<const int>);
	iter(tab2, 5, print<A>);

	return 0;
}
