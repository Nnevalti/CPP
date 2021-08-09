#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->WrongAnimal::_type = "WrongCat";
	std::cout << "WrongCat class default constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat class destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat class copy constructor called." << std::endl;
	*this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat class assignation operator called." << std::endl;
	if (this != &src){}
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "*WrongMeow WrongMeow*" << std::endl;
}
