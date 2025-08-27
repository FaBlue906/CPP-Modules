#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T> class MutantStack : public std::stack<T>
{    
	public:
		typedef typename std::stack<T>::container_type::iterator   it;
		typedef typename std::stack<T>::container_type::const_iterator   c_it;
		typedef typename std::stack<T>::container_type::reverse_iterator   rev_it;
		typedef typename std::stack<T>::container_type::const_reverse_iterator   cr_it;

		MutantStack(){}
		//MutantStack(const MutantStack &m){}
		MutantStack	&operator=(const MutantStack &m)
		{
			this->c = m.c;
			return (*this);
		}
		~MutantStack()
		{
			this->c.clear();
		}
		it	begin() {return (this->c.begin());}
		it	end() {return (this->c.end());}
		c_it begin() const {return (this->c.begin());}
		c_it end() const {return (this->c.end());}
		rev_it rbegin() {return (this->c.rbegin());}
		rev_it rend() {return (this->c.rend());}
		cr_it rbegin() const {return (this->c.rbegin());}
		cr_it rend() const {return (this->c.rend());}
};

#endif