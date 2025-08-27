#include "MutantStack.hpp"
#include <list>

void testSubject()
{
	std::cout << "Running Test shown in the Subject\n" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::it itb = mstack.begin();
	MutantStack<int>::it ite = mstack.end();

	++itb;
	--itb;

	while (itb != ite)
	{
		std::cout << *itb << std::endl;
		++itb;
	}

	std::stack<int> s(mstack);
	std::cout << "Test of the subject is done !" << std::endl;
}

void testReverseIter()
{
	std::cout << "Now Running Reverse Iteration Test !\n" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::rev_it ritb = mstack.rbegin();
	MutantStack<int>::rev_it rite = mstack.rend();
	++ritb;
	--ritb;
	while (ritb != rite)
	{
		std::cout << *ritb << std::endl;
		++ritb;
	}

	std::stack<int> s(mstack);
	std::cout << "Reverse Iteration test done !" << std::endl;
}

void runListIter()
{
	std::cout << "Now Running List Iteration !\n" << std::endl;
	std::list<int> il;
	
	il.push_back(5);
	il.push_back(17);

	std::cout << il.back() << std::endl;
	il.pop_back();

	std::cout << il.size() << std::endl;

	il.push_back(3);
	il.push_back(5);
	il.push_back(737);
	il.push_back(0);

	std::list<int>::iterator itb = il.begin();
	std::list<int>::iterator ite = il.end();

	++itb;
	--itb;

	while (itb != ite)
	{
		std::cout << *itb << std::endl;
		++itb;
	}

	std::list<int> l(il);
}

void runReverseListIter()
{
	std::cout << "Now Running Reverse List Iteration !\n" << std::endl;
	std::list<int> il;
	
	il.push_back(5);
	il.push_back(17);

	std::cout << il.back() << std::endl;
	il.pop_back();

	std::cout << il.size() << std::endl;

	il.push_back(3);
	il.push_back(5);
	il.push_back(737);
	il.push_back(0);

	std::list<int>::reverse_iterator itb = il.rbegin();
	std::list<int>::reverse_iterator ite = il.rend();

	++itb;
	--itb;

	while (itb != ite)
	{
		std::cout << *itb << std::endl;
		++itb;
	}

	std::list<int> l(il);
}

int main()
{
	testSubject();
	std::cout << std::endl;
	testReverseIter();
	std::cout << std::endl;
	runListIter();
	std::cout << std::endl;
	runReverseListIter();
	std::cout << "All Test done !" << std::endl;
	return (0);
}
