#include "FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->_name << ": I'll die the way I lived: annoying!" << std::endl;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	std::cout << "FR4G-TP " << this->_name << ": Allow me to introduce myself!"
	<< " I am a FR4G-TP steward robot, but my friends call me " << name
	<< "! Or they would, if any of them were still alive."
	<< " Or had existed in the first place!" << std::endl;
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoint = 100;
	this->_maxEnergyPoint = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_vaulhunterAttackDamage = 0;
	this->_armorDamageReduction = 5;
	this->_cryoAttackDamage = 10;
	this->_grenadeAttackDamage = 40;
	this->_gunWizardAttackDamage = 55;
	this->_senselessSacrificeAttackDamage = 200;
	this->_clapInTheBoxAttackDamage = 75;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
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
	this->_vaulhunterAttackDamage = src._vaulhunterAttackDamage;
	this->_armorDamageReduction = src._armorDamageReduction;
	this->_cryoAttackDamage = src._cryoAttackDamage;
	this->_grenadeAttackDamage = src._grenadeAttackDamage;
	this->_gunWizardAttackDamage = src._gunWizardAttackDamage;
	this->_senselessSacrificeAttackDamage = src._senselessSacrificeAttackDamage;
	this->_clapInTheBoxAttackDamage = src._clapInTheBoxAttackDamage;

	std::cout << "FR4G-TP " << this->_name << ": Booting sequence complete."
	<< " Hello! I am your new steward bot. Designation: FR4G-TP, Hyperion Robot,"
	<< " Class C. Please adjust factory settings to meet your needs before deployment."
	<< std::endl;
	return (*this);
}

// Getters
std::string FragTrap::getName()
{
	return (this->_name);
}

unsigned int FragTrap::getMeleeAttackDamage()
{
	return (this->_meleeAttackDamage);
}

unsigned int FragTrap::getRangedAttackDamage()
{
	return (this->_rangedAttackDamage);
}

unsigned int FragTrap::getVaulhunterAttackDamage()
{
	return (this->_vaulhunterAttackDamage);

}
unsigned int FragTrap::getCryoAttackDamage()
{
	return (this->_cryoAttackDamage);
}

unsigned int FragTrap::getGrenadeAttackDamage()
{
	return (this->_grenadeAttackDamage);
}

unsigned int FragTrap::getGunWizardAttackDamage()
{
	return (this->_gunWizardAttackDamage);
}

unsigned int FragTrap::getClapInTheBoxAttackDamage()
{
	return (this->_clapInTheBoxAttackDamage);
}

// Setters
void FragTrap::setName(std::string newName)
{
	this->_name = newName;
}

// Damage and repair
void FragTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	if (this->_hitPoint == 0)
	{
		std::cout << "FR4G-TP " << this->_name << ": I'm already dead stop that." << std::endl;
		return ;
	}
	damage = amount - this->_armorDamageReduction;
	if (damage >= this->_hitPoint)
	{
		this->_hitPoint = 0;
		std::cout << "FR4G-TP " << this->_name << ": Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
	}
	else
	{
		this->_hitPoint -= damage;
		std::cout << "FR4G-TP " << this->_name << ": My robotic flesh! AAHH! "
		<< "Damage taken: " << damage << ", HP: " << this->_hitPoint << "/"
		<< this->_maxHitPoint << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->_name << ": ";
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
void FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << this->_name
	<< ": Attacks " << target << " with a melee attack, causing "
	<< this->_meleeAttackDamage <<" damage !" << std::endl;
}

void FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << this->_name
	<< ": Attacks " << target << " with a ranged attack, causing "
	<< this->_rangedAttackDamage <<" damage !" << std::endl;
}

// Random attack
void FragTrap::vaulhunter_dot_exe(std::string const& target)
{
	unsigned int random;

	std::cout << "FR4G-TP " << this->_name << ": ";
	if (this->_energyPoint < 25)
	{
		std::cout << "Not enough energy point to launch a special attack!" << std::endl;
	}
	else
	{
		std::cout << "F to the R to the 4 to the G to the WHAAT! Place your bets!"
		<< std::endl;
		this->_energyPoint -= 25;
		std::srand(time(NULL) + clock());
		random = rand() % 5;
		if (random == 0)
			this->cryoAttack(target);
		else if (random == 1)
			this->grenadeAttack(target);
		else if (random == 2)
			this->gunWizardAttack(target);
		else if (random == 3)
			this->senselessSacrificeAttack(target);
		else
			this->clapInTheBoxAttack(target);
	}
}

void FragTrap::cryoAttack(std::string const& target)
{
	this->_vaulhunterAttackDamage = this->_cryoAttackDamage;
	std::cout << "FR4G-TP " << this->_name
	<< ": Attacks " << target << " with a Cryo attack, causing "
	<< this->_cryoAttackDamage <<" damage !" << std::endl;
	std::cout << "FR4G-TP " << this->_name
	<< ": Icely done." << std::endl;
}

void FragTrap::grenadeAttack(std::string const& target)
{
	this->_vaulhunterAttackDamage = this->_grenadeAttackDamage;
	std::cout << "FR4G-TP " << this->_name
	<< ": Attacks " << target << " with a Grenade attack, causing "
	<< this->_grenadeAttackDamage <<" damage !" << std::endl;
	std::cout << "FR4G-TP " << this->_name
	<< ": Bad guy go boom!" << std::endl;
}

void FragTrap::gunWizardAttack(std::string const& target)
{
	this->_vaulhunterAttackDamage = this->_gunWizardAttackDamage;
	std::cout << "FR4G-TP " << this->_name
	<< ": Attacks " << target << " with a Gun Wizard attack, causing "
	<< this->_gunWizardAttackDamage <<" damage !" << std::endl;
	std::cout << "FR4G-TP " << this->_name
	<< ": You can call me Gundalf!" << std::endl;
}

void FragTrap::senselessSacrificeAttack(std::string const& target)
{
	this->_vaulhunterAttackDamage = this->_senselessSacrificeAttackDamage;
	std::cout << "FR4G-TP " << this->_name
	<< ": Attacks " << target << " with a Senseless Sacrifice attack, causing "
	<< this->_senselessSacrificeAttackDamage <<" damage !" << std::endl;
	std::cout << "FR4G-TP " << this->_name
	<< ": For you...I commit...seddoku..." << std::endl;
}

void FragTrap::clapInTheBoxAttack(std::string const& target)
{
	this->_vaulhunterAttackDamage = this->_clapInTheBoxAttackDamage;
	std::cout << "FR4G-TP " << this->_name
	<< ": Attacks " << target << " with a Clap-in-the-Box attack, causing "
	<< this->_clapInTheBoxAttackDamage <<" damage !" << std::endl;
	std::cout << "FR4G-TP " << this->_name
	<< ": Some days, you just can't get rid of an obscure pop-culture reference." << std::endl;
}
