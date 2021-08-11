#include "Character.hpp"

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
			this->_inventory[i] = 0;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	return ;
}

Character::Character(const Character& src)
{
	this->operator=(src);
}

Character& Character::operator=(const Character& src)
{
	if (this == &src)
		return (*this);
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = 0;
		}
	}
	for (int i = 0; i < 4; i++)
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
	return (*this);
}

std::string const & Character::getName() const { return (this->_name); }

void Character::equip(AMateria* m)
{
	int i = 0;

	if (!m)
		return ;
	while (i < 4 && this->_inventory[i])
		i++;
	if (i < 4)
		this->_inventory[i] = m;
	return ;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = 0;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx]->use(target);
	return ;
}
