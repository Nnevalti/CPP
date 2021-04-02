#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << this->_name << ": Are you god? Am I dead?" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	std::cout << "SC4V-TP " << this->_name << ": Hahahahaha! I'm alive!" << std::endl;
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoint = 50;
	this->_maxEnergyPoint = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
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
	this->_maxHitPoint = src._maxHitPoint;
	this->_energyPoint = src._energyPoint;
	this->_maxEnergyPoint = src._maxEnergyPoint;
	this->_level = src._level;
	this->_meleeAttackDamage = src._meleeAttackDamage;
	this->_rangedAttackDamage = src._rangedAttackDamage;
	this->_armorDamageReduction = src._armorDamageReduction;

	std::cout << "SC4V-TP " << this->_name << ": Holy crap, that worked?"
	<< std::endl;
	return (*this);
}

// Getters
std::string ScavTrap::getName()
{
	return (this->_name);
}

unsigned int ScavTrap::getMeleeAttackDamage()
{
	return (this->_meleeAttackDamage);
}

unsigned int ScavTrap::getRangedAttackDamage()
{
	return (this->_rangedAttackDamage);
}
// Setters
void ScavTrap::setName(std::string newName)
{
	this->_name = newName;
}

// Damage and repair
void ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	if (this->_hitPoint == 0)
	{
		std::cout << "SC4V-TP " << this->_name << ": Aww! Come on! I'm already dead..." << std::endl;
		return ;
	}
	damage = amount - this->_armorDamageReduction;
	if (damage >= this->_hitPoint)
	{
		this->_hitPoint = 0;
		std::cout << "SC4V-TP " << this->_name << ": I'm too pretty to die!" << std::endl;
	}
	else
	{
		this->_hitPoint -= damage;
		std::cout << "SC4V-TP " << this->_name << ": Hey, watch out! "
		<< "Damage taken: " << damage << ", HP: " << this->_hitPoint << "/"
		<< this->_maxHitPoint << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SC4V-TP " << this->_name << ": ";
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

// Classical attack
void ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << "SC4V-TP " << this->_name
	<< ": Attacks " << target << " with a very close attack, causing "
	<< this->_meleeAttackDamage <<" damage !" << std::endl;
}

void ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << "SC4V-TP " << this->_name
	<< ": Attacks " << target << " with a very far away attack, causing "
	<< this->_rangedAttackDamage <<" damage !" << std::endl;
}

// Challenge Newcomer
void ScavTrap::challengeNewcomer(std::string const& target)
{
	int random;
	std::string challenges[] = {
			"Say really fast and loud this four words: Eye, Yam, Stew, Peed. I heard only genius could achieve this.",
			"Let's play a yes or no game: You can only say yes once and no once. Are you beautiful ? Are you lying ?",
			"Solve this riddle: I am between 188 and 190, but I am not 189. Who am I ?",
			"Russian roulette but with a twist, you only have one empty slot in your charger.",
			"I challenge you to not walk through this door...",
			"I bet you can't spare me !",
	};
	std::srand(time(NULL) + clock());
	random = rand() % 6;
	std::cout << "SC4V-TP " << this->_name << " challenges " << target << ": "
	<< std::endl << challenges[random] << std::endl;
}
