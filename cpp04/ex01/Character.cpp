# include "Character.hpp"

Character::Character()
{
	return ;
}

Character::~Character()
{
	return ;
}

Character::Character(std::string const& name) : _name(name), _aPoint(40), _weapon(NULL)
{
	return ;
}

Character::Character(const Character& src)
{
	*this = src;
	return ;
}

Character& Character::operator=(const Character& src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_aPoint = src._aPoint;
		this->_weapon = src._weapon;
	}
	return (*this);
}

void Character::recoverAP()
{
	if (this->_aPoint + 10 > 40)
		this->_aPoint = 40;
	else
		this->_aPoint += 10;
		return ;
}

void Character::equip(AWeapon* weapon)
{
	this->_weapon = weapon;
	return ;
}

void Character::attack(Enemy* enemy)
{
	int apcost;

	if (this->_weapon != NULL && enemy != NULL)
	{
		apcost = this->_weapon->getAPCost();
		if (this->_aPoint - apcost >= 0)
		{
			this->_aPoint -= apcost;
			std::cout << this->_name << " attack " << enemy->getType()
			<< " with a " << _weapon->getName() << std::endl;
			this->_weapon->attack();
			enemy->takeDamage(this->_weapon->getDamage());
			if (enemy->getHP() == 0)
				delete enemy;
		}
	}
	return ;
}

std::string const Character::getName() const { return (this->_name); }
int Character::getAPoint() const { return(this->_aPoint); }
AWeapon *Character::getWeapon() const { return(this->_weapon); }

std::ostream& operator<<(std::ostream& os, const Character& rhs)
{
	if (rhs.getWeapon() != NULL)
	{
		os << rhs.getName() << " has " << rhs.getAPoint() << " AP and carries a "
		<< rhs.getWeapon()->getName() << std::endl;
	}
	else
	{
		os << rhs.getName() << " has " << rhs.getAPoint() << " AP and is unarmed"
		<< std::endl;
	}
	return (os);
}
