#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Animal & Cat & Dog:\n" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "\nWrongAnimal & WrongCat:" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongWrongCat = new WrongCat();
	const WrongCat* wrongCat = new WrongCat();

	wrongAnimal->makeSound();
	wrongWrongCat->makeSound();
	wrongCat->makeSound();

	std::cout << "\nDelete:\n" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wrongAnimal;
	delete wrongCat;
	delete wrongWrongCat;
}
