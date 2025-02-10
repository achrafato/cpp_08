#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>

typename T::iterator	easyfind(T& prm_1, int n)
{
	typename T::iterator it;

	it = std::find(prm_1.begin(), prm_1.end(), n);
	if (it == prm_1.end())
		throw std::invalid_argument("Not Found");
	return it;
}

#endif
