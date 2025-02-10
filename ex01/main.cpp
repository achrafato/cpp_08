#include "./Span.hpp"

int main()
{
	std::vector<int> data;

	try
	{
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.push_iterator(data.begin(), data.end());

		std::cout << " Shortest Path = " << sp.shortestSpan() << std::endl; 
		std::cout << " Longest Path = " << sp.longestSpan() << std::endl; 
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
