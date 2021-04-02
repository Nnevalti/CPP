#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator=(const Peon& src)
{
	this->_name = src._name;
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << _name << " was just polymorphed in a pink pony!" << std::endl;
}
