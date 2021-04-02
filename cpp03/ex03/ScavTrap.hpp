#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		// Contructors and destructor
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		// Operator
		ScavTrap& operator=(const ScavTrap& src);
		// Attack
		void meleeAttack(std::string const& target);
		void rangedAttack(std::string const& target);
		void challengeNewcomer(std::string const& target);
};

#endif
