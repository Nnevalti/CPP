#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "CL4P-TP : New ClapTrap build !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP " << this->_name << ": Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "CL4P-TP: New ClapTrap build !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
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
	return (*this);
}

// Getters
std::string ClapTrap::getName()
{
	return (this->_name);
}

unsigned int ClapTrap::getMeleeAttackDamage()
{
	return (this->_meleeAttackDamage);
}

unsigned int ClapTrap::getRangedAttackDamage()
{
	return (this->_rangedAttackDamage);
}
// Setters
void ClapTrap::setName(std::string newName)
{
	this->_name = newName;
}

// Damage and repair
void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	if (this->_hitPoint == 0)
	{
		std::cout << this->_prefix << " " << this->_name << ": Aww! Come on! I'm already dead..." << std::endl;
		return ;
	}
	damage = amount - this->_armorDamageReduction;
	if (damage >= this->_hitPoint)
	{
		this->_hitPoint = 0;
		std::cout << this->_prefix << " " << this->_name << ": I'm too pretty to die!" << std::endl;
	}
	else
	{
		this->_hitPoint -= damage;
		std::cout << this->_prefix << " " << this->_name << ": Hey, watch out! "
		<< "Damage taken: " << damage << ", HP: " << this->_hitPoint << "/"
		<< this->_maxHitPoint << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_prefix << " " << this->_name << ": ";
	if (this->_hitPoint == this->_maxHitPoint)
	{
		std::cout << "Already at full health!" << std::endl;
	}
	else if (this->_hitPoint + amount > this->_maxHitPoint)
	{
		std::cout << "Full Health! Healed: "
		<< this->_maxHitPoint  - this->_hitPoint << "HP."<< std::endl;
		this->_hitPoint = this->_maxEnergyPoint;
	}
	else
	{
		this->_hitPoint += amount;
		std::cout << "Healed " << amount << "HP, Hit point: " << this->_hitPoint
		<< "/" << this->_maxHitPoint << std::endl;
	}
}
