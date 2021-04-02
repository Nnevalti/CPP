#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
	public:
		// Contructors and destructor
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& src);
		// Operator
		ScavTrap& operator=(const ScavTrap& src);
		// Getters and setters
		std::string		getName();
		unsigned int	getMeleeAttackDamage();
		unsigned int	getRangedAttackDamage();
		void			setName(std::string newName);
		// Damage and repair
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		// Attack
		void meleeAttack(std::string const& target);
		void rangedAttack(std::string const& target);
		void challengeNewcomer(std::string const& target);

	private:
		// ScavTrap attributes
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
};

#endif
