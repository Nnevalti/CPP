#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		// Contructors and destructor
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& src);
		// Operator
		ScavTrap& operator=(const ScavTrap& src);

		// GuardGate func
		void guardGate();
};

#endif
