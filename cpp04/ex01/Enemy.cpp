#include "Enemy.hpp"

Enemy::Enemy()
{
	return ;
}

Enemy::~Enemy()
{
	return ;
}

Enemy::Enemy(int hp, std::string const& type)
{
	this->_hp = hp;
	this->_type = type;
	return ;
}

Enemy::Enemy(const Enemy& src)
{
	*this = src;
	return ;
}

Enemy& Enemy::operator=(const Enemy& src)
{
	if (this != &src)
	{
		this->_hp = src._hp;
		this->_type = src._type;
	}
	return (*this);
}

const std::string	Enemy::getType() const { return(this->_type); }
int					Enemy::getHP() const { return(this->_hp); }

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
	{
		if (this->_hp - damage <= 0)
			this->_hp = 0;
		else
			this->_hp -= damage;
	}
	return ;
}
