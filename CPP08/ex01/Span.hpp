/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:26:29 by fbordes           #+#    #+#             */
/*   Updated: 2024/05/03 09:26:30 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Span
{
    private:
        unsigned int    N;
        std::vector<int>    vect;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &s);
        Span    &operator=(const Span &s);
        ~Span();

        void    addNumber(unsigned int n);
        int     shortestSpan() const;
        int     longestSpan() const;
        void    randFill(unsigned int N);

        class OverFlowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class NoSpanException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif