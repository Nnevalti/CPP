#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): name(name), type(type)
{
	std::cout << "A new zombie called " << name << " just came out of the ground !"
		<< std::endl;
}

Zombie::Zombie()
{
	std::cout << "A zombie came out of the ground" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "The Zombie called " << this->name << " returned to the ground !"
		<< std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
void Zombie::setType(std::string type)
{
	this->type = type;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << " " << "(" << this->type << ")>"
		<< " Braiiiiinnnnssssss...." << std::endl;
}
