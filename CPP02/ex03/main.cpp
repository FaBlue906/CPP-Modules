/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:05:28 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/04 14:51:04 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	// Triangle vertices
	Point a(0, 0), b(10, 30), c(20, 0);
	
	// Points to check
	Point p1(10, 15), p2(0, 10.5), p3(30, 15);
	
	// Check for point p1
	if (bsp(a, b, c, p1))
	{
		std::cout << "Point " << p1 << " is in the triangle" << std::endl;
	}
	else
	{
		std::cout << "Point " << p1 << " is not in the triangle" << std::endl;
	}
	
	// Check for point p2
	if (bsp(a, b, c, p2))
	{
		std::cout << "Point " << p2 << " is in the triangle" << std::endl;
	}
	else
	{
		std::cout << "Point " << p2 << " is not in the triangle" << std::endl;
	}
	
	// Check for point p3
	if (bsp(a, b, c, p3))
	{
		std::cout << "Point " << p3 << " is in the triangle" << std::endl;
	}
	else
	{
		std::cout << "Point " << p3 << " is not in the triangle" << std::endl;
	}
	return 0;
}

/*
Triangle: A = (0, 0), B = (10, 30), C = (20, 0)
Point: P(10, 15)
Output: Inside

              B(10,30)
                / \
               /   \
              /     \
             /   P   \
            /         \
     A(0,0) ----------- C(20,0)
*/
