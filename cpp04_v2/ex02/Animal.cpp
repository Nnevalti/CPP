#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal class default constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal class destructor called." << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal class copy constructor called." << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal class assignation operator called." << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::makeSound() const
{
	std::cout << "*Unknown animal sound*" << std::endl;
}
