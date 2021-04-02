#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	return ;
}

AWeapon::~AWeapon()
{
	return ;
}

AWeapon::AWeapon(std::string const& name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
	return ;
}

AWeapon::AWeapon(const AWeapon& src)
{
	*this = src;
	return ;
}

AWeapon& AWeapon::operator=(const AWeapon& src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_apcost = src._apcost;
		this->_damage = src._damage;
	}
	return (*this);
}

const std::string	AWeapon::getName() const { return(this->_name); }
int					AWeapon::getAPCost() const { return(this->_apcost); }
int					AWeapon::getDamage() const { return(this->_damage); }
