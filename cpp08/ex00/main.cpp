#include <iostream>
#include <list>
#include "easyfind.hpp"
#define RANGE 10

int main(void)
{
	std::list <int> l;
	int n;

	for (int i = 0; i < RANGE; i++)
	{
		l.push_front(i * 2);
	}

	for (int i = -5; i < RANGE; i++)
	{
		try
		{
			n = easyfind(l, i * 2);
			std::cout << "Value of n is : " << n << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
			std::cout << "Couldn't find value: " << i * 2 << std::endl;

		}
	}
	return 0;
}
