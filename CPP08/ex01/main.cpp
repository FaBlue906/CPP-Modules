/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:26:18 by fbordes           #+#    #+#             */
/*   Updated: 2024/05/03 09:26:19 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    testException()
{
    std::cout << "Running Exception Test. Staring with overflow\n" << std::endl;
    try
    {
        Span    sp = Span(2);

        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception Caught !" << std::endl;
        std::cerr << e.what() << '\n';
    }
    std::cout << "\n" << std::endl;
    std::cout << "Shortest Span without enough values\n" << std::endl;
    try
    {
        Span    sp = Span(1);

        sp.addNumber(1);
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception Caught !" << std::endl;
        std::cerr << e.what() << '\n';
    }
    std::cout << "\n" << std::endl;
    std::cout << "Longest Span without enough values\n" << std::endl;
    try
    {
        Span    sp = Span(1);

        sp.addNumber(1);
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception Caught !" << std::endl;
        std::cerr << e.what() << '\n';
    }
    std::cout << "Exception Test done !" << std::endl;
}

void    testValid()
{
    std::cout << "Running Tests that should work\n" << std::endl;
    Span    sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void    testRandFill()
{
    std::cout << "Running Random Fill Test\n" << std::endl;
    try
    {
        Span    sp = Span(100);

        sp.randFill(100);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception Caught !" << std::endl;
        std::cerr << e.what() << '\n';
    }
    try
    {
        Span    sp = Span(1000);

        sp.randFill(1000);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception Caught !" << std::endl;
        std::cerr << e.what() << '\n';
    }
    try
    {
        Span    sp = Span(10000);

        sp.randFill(10000);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception Caught !" << std::endl;
        std::cerr << e.what() << '\n';
    }
    try
    {
        Span    sp = Span(100000);

        sp.randFill(100000);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception Caught !" << std::endl;
        std::cerr << e.what() << '\n';
    }
    try
    {
        Span    sp = Span(100000);

        sp.randFill(100000);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception Caught !" << std::endl;
        std::cerr << e.what() << '\n';
    }

    std::cout << "Random Fill Test done !" << std::endl;
}

int main()
{
    testException();
    std::cout << "\n" << std::endl;
    testValid();
    std::cout << "\n" << std::endl;
    testRandFill();
    std::cout << "All test done, congrats !" << std::endl;
    return (0);
}