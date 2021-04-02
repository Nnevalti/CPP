#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->_prefix << " " << this->_name
	<< ": The robot is dead, long live the robot!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 60;
	this->_maxHitPoint = 60;
	this->_energyPoint = 120;
	this->_maxEnergyPoint = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_prefix = "NINJ4-TP";

	std::cout << this->_prefix << " " << this->_name << ": I can do more than open doors! We NINJ4-TP units can be programmed to do anything from open doors to ninja-sassinate highly important Janitory officals!"
	<< std::endl;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap& src)
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

	std::cout << this->_prefix << " " << this->_name << ": Activating copy mode..."
	<< std::endl;
	return (*this);
}
// Classical attack
void NinjaTrap::meleeAttack(std::string const& target)
{
	std::cout << this->_prefix << " " << this->_name
	<< ": Attacks " << target << " with a katana attack, causing "
	<< this->_meleeAttackDamage <<" damage !" << std::endl;
}

void NinjaTrap::rangedAttack(std::string const& target)
{
	std::cout << this->_prefix << " " << this->_name
	<< ": Attacks " << target << " with a shuriken attack, causing "
	<< this->_rangedAttackDamage <<" damage !" << std::endl;
}

// ninjaShoeBox attack
void NinjaTrap::ninjaShoeBox(ClapTrap& clap)
{
	std::cout << this->_prefix << " " << this->_name << ": "
	<< "Watch as we observe the rare and beautiful Clappy Bird " << clap.getName() << "!" << std::endl;
}

void NinjaTrap::ninjaShoeBox(FragTrap& frag)
{
	std::cout << this->_prefix << " " << this->_name << ": "
	<< "Get ready for some Fragtrap face time " << frag.getName() << "!" << std::endl;
}

void NinjaTrap::ninjaShoeBox(ScavTrap& scav)
{
	std::cout << this->_prefix << " " << this->_name << ": "
	<< "You're just a scaverage CL4P-TP " << scav.getName() << "!" << std::endl;

}

void NinjaTrap::ninjaShoeBox(NinjaTrap& ninja)
{
	std::cout << this->_prefix << " " << this->_name << ": "
	<< "Hello my fellow ninja friend " << ninja.getName() << "!" << std::endl;

}
