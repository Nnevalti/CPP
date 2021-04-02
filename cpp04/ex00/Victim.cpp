#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "The victim " << _name << " died for no apparent reasons!" << std::endl;
}

Victim::Victim(const Victim& src)
{
	*this = src;
}

Victim& Victim::operator=(const Victim& src)
{
	this->_name = src._name;
	return (*this);
}

const std::string& Victim::getName() const { return (this->_name); }
void Victim::setName(std::string name) { this->_name = name; }

void Victim::getPolymorphed() const
{
	std::cout << _name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Victim& rhs)
{
	os << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return (os);
}
