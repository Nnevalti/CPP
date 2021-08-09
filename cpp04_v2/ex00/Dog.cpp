#include "Dog.hpp"

Dog::Dog()
{
	this->Animal::_type = "Dog";
	std::cout << "Dog class default constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog class destructor called." << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog class copy constructor called." << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog class assignation operator called." << std::endl;
	if (this != &src){}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "*Woof woof*" << std::endl;
}
