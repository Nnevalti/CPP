#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name): name(name){}

Zombie::~Zombie(void)
{
	std::cout << "The Zombie called " << this->name << " returned to the ground !"
		<< std::endl << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << ">"
		<< " Braiiiiinnnnssssss...." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
