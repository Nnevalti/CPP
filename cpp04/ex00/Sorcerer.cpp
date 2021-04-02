#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title
	<< ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title
	<< ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& src)
{
	this->_name = src._name;
	this->_title = src._title;
	return (*this);
}

const std::string& Sorcerer::getName() const { return (this->_name); }
const std::string& Sorcerer::getTitle() const { return (this->_title); }
void Sorcerer::setName(std::string name) { this->_name = name; }

void Sorcerer::polymorph(const Victim& victim)
{
	victim.getPolymorphed();
}
std::ostream& operator<<(std::ostream& os, const Sorcerer& rhs)
{
	os << "I am " << rhs.getName()
	<< ", " << rhs.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}
