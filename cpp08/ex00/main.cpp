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
			std::cout << "Found value for n = " << n << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
