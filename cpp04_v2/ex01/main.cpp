#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Animal* array[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			array[i] = new Dog;
		else
			array[i] = new Cat;
	}
	for (int i = 0; i < 10; i++)
		delete array[i];

	const Cat* cat = new Cat();
	const Cat* catCopy = new Cat(*cat);
	std::cout << "Delete the original cat to verify deep copy" << std::endl;
	delete cat;
	std::cout << std::endl << "copyCat ideas:" << std::endl;
	catCopy->getBrain().displayIdeas();

	std::cout << "\nDelete:\n" << std::endl;
	delete catCopy;
}
