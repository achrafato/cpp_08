#include "./MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(10);
	mstack.push(20);
	mstack.push(30);

	for (MutantStack<int>::iterator it = mstack.begin() ; it != mstack.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "Stack in reverse order " << std::endl;
	for (MutantStack<int>::rev_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
	{
		std::cout << *rit << " ";
	}
	std::cout << std::endl;

	return 0;
}
