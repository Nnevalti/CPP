#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
	return ;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

SuperMutant::SuperMutant(const SuperMutant& src)
{
	*this = src;
	return ;
}

SuperMutant& SuperMutant::operator=(const SuperMutant& src)
{
	if (this != &src)
	{
		this->_hp = src._hp;
		this->_type = src._type;
	}
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	this->Enemy::takeDamage(damage);
	return ;
}
