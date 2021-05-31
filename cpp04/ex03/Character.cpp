#include "Character.hpp"

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
			this->_inventory[i] = NULL;
	return ;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	return ;
}

Character::Character(const Character& src): _name(src._name)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i]->clone();
	return ;
}

Character& Character::operator=(const Character& src)
{
	if (this == &src)
		return (*this);
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i]->clone();
	return (*this);
}

std::string const & Character::getName() const { return (this->_name); }

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4 && this->_inventory[i] != NULL)
		i++;
	if (i < 4)
		this->_inventory[i] = m;
	return ;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx]->use(target);
	return ;
}
