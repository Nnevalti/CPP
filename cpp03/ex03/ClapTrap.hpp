#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		//Contructors and destructor
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& src);
		ClapTrap& operator=(const ClapTrap& src);
		//Getters and setters
		std::string		getName();
		unsigned int	getMeleeAttackDamage();
		unsigned int	getRangedAttackDamage();
		void			setName(std::string newName);
		//Damage and repair
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		// ClapTrap attributes
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_maxHitPoint;
		unsigned int	_energyPoint;
		unsigned int	_maxEnergyPoint;
		unsigned int	_level;
		// Damage
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;

		std::string		_prefix;
};

#endif
