#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(const RadScorpion& src)
{
	*this = src;
	return ;
}

RadScorpion& RadScorpion::operator=(const RadScorpion& src)
{
	if (this != &src)
	{
		this->_hp = src._hp;
		this->_type = src._type;
	}
	return (*this);
}

void RadScorpion::takeDamage(int damage)
{
	damage -= 3;
	this->Enemy::takeDamage(damage);
	return ;
}
