#include "Brain.hpp"

Brain::Brain()
{
	std::stringstream buff;
	buff << this;
	this->address = buff.str();
}
Brain::~Brain(){}

std::string Brain::identify() const
{
	std::cout << "Called identify from Brain class :" << std::endl;
	std::stringstream buff;
	buff << this;

	return (this->address);
}
