#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

using std::vector;

class Span
{
	private :
		std::vector<int> data;
		unsigned int N;
	public :
		Span(unsigned int N);
		Span();
		~Span();
		Span(const Span &obj);
		Span &operator=(const Span &obj);

		void	addNumber(int num);
		unsigned int		shortestSpan(void);
		unsigned int		longestSpan(void);
		void	push_iterator(const vector<int>::iterator &begin, const vector<int>::iterator &end);
};

#endif