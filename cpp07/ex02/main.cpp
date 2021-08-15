#include <iostream>
#include "Array.hpp"
#define MAX_VAL 750

// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }
//
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }

#define BOLD "\033[1m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define SET "\033[0m"

int main(int, char**)
{
	Array<int> empty;
	for (unsigned int i = 0; i < 5; i++)
	{
		try
		{
			std::cout << "empty: " << empty[i] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	Array<int> tmp(5);
	srand(time(NULL));

	std::cout << YELLOW << "Copy constructor test" << SET << std::endl;
	Array<int> test(tmp);
	std::cout << std::endl << "Should be the same: " << std::endl;
	for (unsigned int i = 0; i < tmp.size(); i++)
	{
		std::cout << "test: " << test[i] << std::endl;
		std::cout << "tmp: " << tmp[i] << std::endl;
	}
	std::cout << std::endl << "Modifying test or tmp should not change the other one: " << std::endl;
	for (unsigned int i = 0; i < tmp.size(); i++)
	{
		test[i] = rand();
		tmp[i] = i;
		std::cout << "test: " << test[i] << std::endl;
		std::cout << "tmp: " << tmp[i] << std::endl;
	}
	std::cout << std::endl << YELLOW << "Assignation Operator test:" << SET << std::endl;
	tmp = test;
	std::cout << std::endl << "Should be the same: " << std::endl;
	for (unsigned int i = 0; i < tmp.size(); i++)
	{
		std::cout << "test: " << test[i] << std::endl;
		std::cout << "tmp: " << tmp[i] << std::endl;
	}
	std::cout << std::endl << "Modifying test or tmp should not change the other one: " << std::endl;
	for (unsigned int i = 0; i < tmp.size(); i++)
	{
		test[i] = i;
		std::cout << "test: " << test[i] << std::endl;
		std::cout << "tmp: " << tmp[i] << std::endl;
	}

	std::cout << std::endl << YELLOW << "Exception test:" << SET << std::endl;
	try
	{
		test[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		test[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << YELLOW << "Creating an array of size " << MAX_VAL << "." << SET << std::endl;
	Array<int> numbers(MAX_VAL);

	for (unsigned int i = 0; i < numbers.size(); i++)
		numbers[i] = rand();

	return 0;
}
