#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap()
{}

SuperTrap::~SuperTrap()
{
	std::cout << this->_prefix << " " << this->_name
	<< ": I'm like super-dead!" << std::endl;

}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{
	this->_hitPoint = this->FragTrap::_hitPoint;
	this->_maxHitPoint = this->FragTrap::_maxHitPoint;
	this->_energyPoint = this->NinjaTrap::_energyPoint;
	this->_maxEnergyPoint = this->NinjaTrap::_maxEnergyPoint;
	this->_level = 1;
	this->_meleeAttackDamage = this->NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = this->FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = this->FragTrap::_armorDamageReduction;
	this->_prefix = "SUPER-TP";

	std::cout << this->_prefix << " " << this->_name
	<< ": I will prove to you my robotic superiority!" << std::endl;

}

SuperTrap::SuperTrap(const SuperTrap& src)
{
	*this = src;
}

SuperTrap& SuperTrap::operator=(const SuperTrap& src)
{
	std::cout << "Copy operator called:" << std::endl;
	this->_name = src._name;
	this->_hitPoint = src._hitPoint;
	this->_maxHitPoint = src._maxHitPoint;
	this->_energyPoint = src._energyPoint;
	this->_maxEnergyPoint = src._maxEnergyPoint;
	this->_level = src._level;
	this->_meleeAttackDamage = src._meleeAttackDamage;
	this->_rangedAttackDamage = src._rangedAttackDamage;
	this->_armorDamageReduction = src._armorDamageReduction;
	this->_prefix = src._prefix;

	std::cout << this->_prefix << " " << this->_name << ": Activating super copy mode..."
	<< std::endl;
	return (*this);

}

// Classical attack
void SuperTrap::meleeAttack(std::string const& target)
{
	this->NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(std::string const& target)
{
	this->FragTrap::rangedAttack(target);
}
