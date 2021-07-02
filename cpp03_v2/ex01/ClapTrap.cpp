#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP " << this->_name << ": I'll die the way I lived: annoying!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "CL4P-TP " << this->_name << ": Allow me to introduce myself!"
	<< " I am a CL4P-TP steward robot, but my friends call me " << name
	<< "! Or they would, if any of them were still alive."
	<< " Or had existed in the first place!" << std::endl;
	this->_hitPoint = 10;
	this->_energyPoint = 10;
	this->_attackDamage = 0;
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
	this->_energyPoint = src._energyPoint;
	this->_attackDamage = src._attackDamage;

	std::cout << "CL4P-TP " << this->_name << ": Booting sequence complete."
	<< " Hello! I am your new steward bot. Designation: CL4P-TP, Hyperion Robot,"
	<< " Class C. Please adjust factory settings to meet your needs before deployment."
	<< std::endl;
	return (*this);
}

// Getters
std::string ClapTrap::getName()
{
	return (this->_name);
}

unsigned int ClapTrap::getAttackDamage()
{
	return (this->_attackDamage);
}

// Setters
void ClapTrap::setName(std::string newName)
{
	this->_name = newName;
}

// Classical attack
void ClapTrap::attack(std::string const& target)
{
	std::cout << "CL4P-TP " << this->_name
	<< ": Attacks " << target << ", causing "
	<< this->_attackDamage <<" points of damage !" << std::endl;
}

// Damage and repair
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint == 0)
	{
		std::cout << "CL4P-TP " << this->_name << ": I'm already dead stop that." << std::endl;
		return ;
	}
	if (amount >= this->_hitPoint)
	{
		this->_hitPoint = 0;
		std::cout << "CL4P-TP " << this->_name << ": Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
	}
	else
	{
		this->_hitPoint -= amount;
		std::cout << "CL4P-TP " << this->_name << ": My robotic flesh! AAHH! "
		<< "Damage taken: " << amount << ", HP: " << this->_hitPoint << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoint += amount;
	std::cout << "CL4P-TP " << this->_name << ": ";
	std::cout << "Healed " << amount << "HP, Hit point: " << this->_hitPoint << std::endl;
}
