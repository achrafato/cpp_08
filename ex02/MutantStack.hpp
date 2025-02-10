#ifndef MUTANTSTACK
#define MUTANTSTACK

#include <stack>
#include <iostream>

template <typename T>

class MutantStack : public std::stack<T>
{
	public:
		MutantStack(){}
		~MutantStack(){}
		MutantStack(const MutantStack &stack)
		{
			*this = stack;
		}
		MutantStack& operator=(const MutantStack& stack)
		{
			if (this != &stack) {
				this->c = stack.c;
			}
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator rev_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_rev_iterator;

		iterator begin()
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}

		const_iterator cbegin() const
		{
			return this->c.cbegin();
		}

		const_iterator cend() const
		{
			return this->c.cend();
		}

		rev_iterator rbegin()
		{
			return this->c.rbegin();
		}

		rev_iterator rend()
		{
			return this->c.rend();
		}

		const_rev_iterator crbegin() const
		{
			return this->c.crbegin();
		}

		const_rev_iterator crend() const
		{
			return this->c.crend();
		}
};

#endif
