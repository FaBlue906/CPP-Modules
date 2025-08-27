/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:26:25 by fbordes           #+#    #+#             */
/*   Updated: 2024/05/03 09:26:26 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->N = 5;
	this->vect.reserve(this->N);
	std::cout << "New Span Object called with size " << this->N << "." << std::endl;
}

Span::Span(unsigned int N)
{
	this->N = N;
	this->vect.reserve(this->N);
	std::cout << "New Span Object called with size " << this->N << "." << std::endl;
}

Span::Span(const Span &s)
{
	this->N = s.N;
	this->vect = s.vect;
	std::cout << "New Span copy object." << std::endl;
}

Span    &Span::operator=(const Span &s)
{
	this->vect.clear();
	this->N = s.N;
	this->vect = s.vect;
	return (*this);
}

Span::~Span()
{
	this->vect.clear();
	std::cout << "Deleting Span object with size " << this->N << "." << std::endl;
}

const char* Span::OverFlowException::what() const throw()
{
	return ("Too much Overflow due to many items already stored !");
}

const char* Span::NoSpanException::what() const throw()
{
	return ("No Span can be found, stored numbers size is too low");
}

void    Span::addNumber(unsigned int n)
{
	if (this->vect.size() >= this->N)
		throw Span::OverFlowException();
	this->vect.push_back(n);
}

int	Span::shortestSpan() const
{
	if (this->vect.size() <= 1)
		throw Span::NoSpanException();

	std::vector<int> tmp = this->vect;
	int	shortest = 0;
	std::sort(tmp.begin(), tmp.end());
	shortest = tmp[1] - tmp[0];

	for(size_t i = 1; i < tmp.size(); i++)
	{
		if (shortest > tmp[i] - tmp[i - 1])
			shortest = tmp[i] - tmp[i - 1];
	}
	return (shortest);
}

int	Span::longestSpan() const
{
	if (this->vect.size() < 3)
		throw Span::NoSpanException();

	std::vector<int> tmp = this->vect;
	int	longest = 0;
	std::sort(tmp.begin(), tmp.end());
	longest = tmp[tmp.size() - 1] - tmp[0];
	return (longest);
}

void	Span::randFill(unsigned int N)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < N; i++)
		this->addNumber(rand() % 1000000);
}