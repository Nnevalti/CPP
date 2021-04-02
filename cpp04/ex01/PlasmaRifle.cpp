#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
	return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& src)
{
	*this = src;
	return ;
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_apcost = src._apcost;
		this->_damage = src._damage;
	}
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
