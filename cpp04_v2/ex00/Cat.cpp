#include "Cat.hpp"

Cat::Cat()
{
	this->Animal::_type = "Cat";
	std::cout << "Cat class default constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat class destructor called." << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat class copy constructor called." << std::endl;
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat class assignation operator called." << std::endl;
	if (this != &src){}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "*Meow meow*" << std::endl;
}
