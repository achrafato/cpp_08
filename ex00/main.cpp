#include "./easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> a;

	a.push_back(1);
	a.push_back(2);
	a.push_back(-4);
	a.push_back(4);

	try
	{
		std::cout << *easyfind(a, -4) << "\n";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
