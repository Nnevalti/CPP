#include "Cat.hpp"

Cat::Cat()
{
	this->Animal::_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat class default constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat class destructor called." << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat &src): Animal(src)
{
	std::cout << "Cat class copy constructor called." << std::endl;
	this->_type = src._type;
	this->_brain = new Brain(*src._brain);
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat class assignation operator called." << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "*Meow meow*" << std::endl;
}

const Brain &Cat::getBrain() const
{
	return (*this->_brain);
}
