#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::~PowerFist()
{
	return ;
}

PowerFist::PowerFist(const PowerFist& src)
{
	*this = src;
	return ;
}

PowerFist& PowerFist::operator=(const PowerFist& src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_apcost = src._apcost;
		this->_damage = src._damage;
	}
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
