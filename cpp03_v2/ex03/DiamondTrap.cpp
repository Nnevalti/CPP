#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DI4MOND-TP " << this->_name << ": Are you god? Am I dead?" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name), _name(name)
{
	std::cout << "DI4MOND-TP " << this->_name << ": Hahahahaha! I'm alive!" << std::endl;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = ScavTrap::_attackDamage;
	std::cout << this->_energyPoint << std::endl;
	std::cout << this->_hitPoint << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
{
	*this = src;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	std::cout << "Copy operator called:" << std::endl;
	this->_name = src._name;
	this->_hitPoint = src._hitPoint;
	this->_energyPoint = src._energyPoint;
	this->_attackDamage = src._attackDamage;

	std::cout << "DI4MOND-TP " << this->_name << ": Holy crap, that worked?"
	<< std::endl;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DI4MOND-TP " << ": my D-TP name is " << this->_name << " and my C-Tp name is " << this->ClapTrap::_name
	<< std::endl;
}
