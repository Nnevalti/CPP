#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << this->_name << ": Are you god? Am I dead?" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "SC4V-TP " << this->_name << ": Hahahahaha! I'm alive!" << std::endl;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	*this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	std::cout << "Copy operator called:" << std::endl;
	this->_name = src._name;
	this->_hitPoint = src._hitPoint;
	this->_energyPoint = src._energyPoint;
	this->_attackDamage = src._attackDamage;

	std::cout << "SC4V-TP " << this->_name << ": Holy crap, that worked?"
	<< std::endl;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "SC4V-TP " << this->_name << ": I entered in gate keeper mode ! No one can't stop me... Wait no, No one can pass me !" << std::endl;
}
