#include <iostream>
#include "iter.hpp"

void print(int &a)
{
	std::cout << a << std::endl;
}

void add(int &a)
{
	a++;
}

int main(void)
{
	int array[5] = {0, 1, 2, 3, 4};

	iter(array, 5, print);
	iter(array, 5, add);
	iter(array, 5, print);
	return 0;
}
