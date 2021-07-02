#ifndef ClapTrap_HPP
# define ClapTrap_HPP

#include <iostream>

class ClapTrap
{
	public:
		// Contructors and destructor
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& src);
		// Operator
		ClapTrap& operator=(const ClapTrap& src);

		// Getters and setters
		std::string		getName();
		unsigned int	getAttackDamage();
		void			setName(std::string newName);

		// Damage and repair
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void attack(std::string const &target);
	protected:
		// ClapTrap attributes
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;
};

#endif
