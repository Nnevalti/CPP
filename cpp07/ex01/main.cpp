#include <iostream>
#include "iter.hpp"

template <typename T>
void print(T &a)
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
	std::string array2[5] = {"Hello", "World", "Bye", "World", "!"};

	iter(array, 5, print);
	iter(array, 5, add);
	iter(array, 5, print);

	iter(array2, 5, print);
	return 0;
}
