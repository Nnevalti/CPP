#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Animal* cat = new Cat;
	Animal* dog = new Dog;

	cat->makeSound();
	dog->makeSound();

	delete cat;
	delete dog;
	// uncomment the line below to test if default Animal constructor is really uninstantiable
	// const Animal *test = new Animal();
}
