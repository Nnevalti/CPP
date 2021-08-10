#include "Dog.hpp"

Dog::Dog()
{
	this->Animal::_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog class default constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog class destructor called." << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog &src): Animal(src)
{
	std::cout << "Dog class copy constructor called." << std::endl;
	this->_type = src._type;
	this->_brain = new Brain(*src._brain);
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog class assignation operator called." << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "*Woof woof*" << std::endl;
}

const Brain &Dog::getBrain() const
{
	return (*this->_brain);
}
