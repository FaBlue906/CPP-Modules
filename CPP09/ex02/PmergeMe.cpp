#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(int ac, char **av)
{
	std::deque<int> deque;
	std::vector<int> vect;
	double vectProcessTime;
	double dequeProcessTime;

	if (ac < 3)
		throw PmergeMe::NotEnoughArgsException();
	if (!_isExpressValid(ac, av))
		throw PmergeMe::InvalidNumbersException();
	/* Filling the deque and vector */
	for (int i = 1; i < ac; i++)
	{
		int extractedN = std::atoi(av[i]);

		deque.push_back(extractedN);
		vect.push_back(extractedN);
	}

	_print("Before: ", vect);
	vectProcessTime = _run(vect);
	dequeProcessTime = _run(deque);
	_print("After: ", vect);
	std::cout << "Time to process a range of " << vect.size() << " elements with std::deque : " \
			<< std::fixed << std::setprecision(5) << dequeProcessTime << " us" << std::endl;
	std::cout << "Time to process a range of " << vect.size() << " elements with std::vector : " \
			<< std::fixed << std::setprecision(5) << vectProcessTime << " us" << std::endl;
	std::cout << "Are container sorted? [" << (_isSorted(vect) && _isSorted(deque) ? "YES!" : "NO!") << "]" \
			<< std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &p)
{
	*this = p;
}

PmergeMe::~PmergeMe() {}

PmergeMe	&PmergeMe::operator=(const PmergeMe &p)
{
	(void) p;
	return (*this);
}

bool	PmergeMe::_isExpressValid(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		for (size_t j = 0; j < std::strlen(av[i]); j++)
		{
			if (!std::isdigit(av[i][j]))
				return (false);
		}
		int extractedN = std::atoi(av[i]);
		if (extractedN <= 0)
			return (false);
	}
	return (true);
}

const char*		PmergeMe::NotEnoughArgsException::what() const throw()
{
	return ("You must at least specify 2 numbers to sort.");
}

const char*		PmergeMe::InvalidNumbersException::what() const throw()
{
	return ("You should only put positive numbers.");
}