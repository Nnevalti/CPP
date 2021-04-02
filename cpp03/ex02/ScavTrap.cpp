#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){}

ScavTrap::~ScavTrap()
{
	std::cout << this->_prefix << " " << this->_name << ": Are you god? Am I dead?" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoint = 50;
	this->_maxEnergyPoint = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_prefix = "SC4V-TP";

	std::cout << this->_prefix << " " << this->_name << ": Hahahahaha! I'm alive!" << std::endl;
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
	this->_prefix = src._prefix;

	std::cout << this->_prefix << " " << this->_name << ": Holy crap, that worked?"
	<< std::endl;
	return (*this);
}

// Classical attack
void ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << this->_prefix << " " << this->_name
	<< ": Attacks " << target << " with a very close attack, causing "
	<< this->_meleeAttackDamage <<" damage !" << std::endl;
}

void ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << this->_prefix << " " << this->_name
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
	std::cout << this->_prefix << " " << this->_name << " challenges " << target << ": "
	<< std::endl << challenges[random] << std::endl;
}
