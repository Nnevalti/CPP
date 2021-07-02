#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->_name << ": Are you god? Am I dead?" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FR4G-TP " << this->_name << ": Hahahahaha! I'm alive!" << std::endl;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& src)
{
	*this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	std::cout << "Copy operator called:" << std::endl;
	this->_name = src._name;
	this->_hitPoint = src._hitPoint;
	this->_energyPoint = src._energyPoint;
	this->_attackDamage = src._attackDamage;

	std::cout << "FR4G-TP " << this->_name << ": Holy crap, that worked?"
	<< std::endl;
	return (*this);
}

void FragTrap::highFiveGuys()
{
	std::cout << "FR4G-TP " << this->_name << ": Come on guys who is up for a big old high five ? Oh yeah, I don't have friends..." << std::endl;
}
