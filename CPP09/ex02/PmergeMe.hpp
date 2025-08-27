#ifndef PMERGE_HPP
# define PMERGE_HPP

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <deque>
#include <vector>
#include <ctime>
#include <cstring>

class PmergeMe
{
	private:
		PmergeMe();
		PmergeMe	&operator=(const PmergeMe &p);
		bool _isExpressValid(int ac, char **av);
		template <typename T> void _sort(T &c, T &leftHalf, T &rightHalf);
		template <typename T> void _divideAndSort(T &c);
		template <typename T> void	_print(std::string prefix, T &c);
		template <typename T> double _run(T &c);
		template <typename T> bool _isSorted(T &c);

	public:
		PmergeMe(int ac, char **av);
		PmergeMe(const PmergeMe &p);
		~PmergeMe();

		class NotEnoughArgsException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class InvalidNumbersException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#include "PmergeMe.tpp"

#endif