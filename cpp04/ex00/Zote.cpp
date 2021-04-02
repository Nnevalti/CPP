#include "Zote.hpp"

Zote::Zote(std::string name) : Victim(name)
{
	std::cout << "Know this, cur. I am Zote the Mighty, a knight of great renown. Cross me again, and you'll find out why they call my weapon 'Life Ender'." << std::endl;
}

Zote::~Zote()
{
	std::cout << "Go on, cur! Scurry away! Lest I humiliate you further!" << std::endl;
}

Zote::Zote(const Zote& src) : Victim(src)
{
	*this = src;
}

Zote& Zote::operator=(const Zote& src)
{
	this->_name = src._name;
	return (*this);
}

void Zote::getPolymorphed() const
{
	std::cout << _name << " was just polymorphed in a grumpy grub!" << std::endl;
}
