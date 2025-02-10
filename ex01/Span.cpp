#include "./Span.hpp"

Span::Span (unsigned int N)
{
	this->N = N;	
}

Span::Span (){}

Span::~Span (){}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span &Span::operator=(const Span &obj)
{
	if (this != &obj)
	{
		N = obj.N;
		data = obj.data;
	}
	return *this;
}

void	Span::addNumber(int num)
{
	if (data.size() < N)
		data.push_back(num);
	else
		throw std::length_error("Insufficient Size");
}

unsigned int	Span::shortestSpan(void)
{
	long dt;
	long dtt;
	long tmp;
	long shrt = 214748364948;

	if (data.size() <= 1)
		throw std::length_error("Empty or Almost");

	std::sort(data.begin(), data.end());
	for (size_t i = 0; i < data.size(); i++)
	{
		dt = data[i];
		for (size_t j = 0; j < data.size(); j++)
		{
			if (j == i)
				continue ;
			dtt = data[j];
			tmp = std::abs(dt - dtt);
			if (shrt >= tmp)
				shrt = tmp;
		}
	}
	return shrt;
}

unsigned int	Span::longestSpan(void)
{

	unsigned int longest_p;

	if (data.size() <= 1)
		throw std::length_error("Empty or Almost");

	std::sort(data.begin(), data.end());
	longest_p = data.back() - data.front();

	return longest_p;
}

void	Span::push_iterator(const vector<int>::iterator &begin, const vector<int>::iterator &end)
{
	vector<int>::iterator it = begin;
	for (; it != end; it++)
	{
		this->addNumber(*it);
	}
}
