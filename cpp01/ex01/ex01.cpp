#include <iostream>

void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}

// To test the function uncomment the main :
// And use : valgrind --leak-check=full ./a.out
// int main(void)
// {
// 	memoryLeak();
}
