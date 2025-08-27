template <typename T> void PmergeMe::_sort(T &c, T &leftHalf, T &rightHalf)
{
	typename T::iterator leftIt = leftHalf.begin();
	typename T::iterator rightIt = rightHalf.begin();

	/* Comparing elements and sorting them */
	while (leftIt != leftHalf.end() && rightIt != rightHalf.end())
	{
		if (*leftIt < *rightIt)
		{
			c.push_back(*leftIt);
			leftIt++;
		}
		else
		{
			c.push_back(*rightIt);
			rightIt++;
		}
	}
	/* Adding remaining elements out of range */
	while (leftIt != leftHalf.end())
	{
		c.push_back(*leftIt);
		leftIt++;
	}
	while (rightIt != rightHalf.end())
	{
		c.push_back(*rightIt);
		rightIt++;
	}
}

template <typename T> void PmergeMe::_divideAndSort(T &c)
{
	if (c.size() <= 1)
		return ;
	typename T::iterator	median = c.begin();

	std::advance(median, c.size() / 2);
	T	leftHalf(c.begin(), median);
	T	rightHalf(median, c.end());

	_divideAndSort(leftHalf);
	_divideAndSort(rightHalf);

	c.clear();
	_sort(c, leftHalf, rightHalf);
}

template <typename T> double PmergeMe::_run(T &c)
{
	PmergeMe	obj;
	double	processTime;

	clock_t start = clock();
	obj._divideAndSort(c);
	clock_t end = clock();

	/* Calculating exec time */
	processTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
	return (processTime);
}

template <typename T> void PmergeMe::_print(std::string prefix, T &c)
{
	std::cout << prefix;
	for (typename T::const_iterator it = c.begin(); it != c.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template <typename T> bool PmergeMe::_isSorted(T &c)
{
	typename T::const_iterator prev = c.begin();
	for (typename T::const_iterator it = c.begin(); it != c.end(); ++it)
	{
		if (*prev > *it)
			return (false);
	}
	return (true);
}