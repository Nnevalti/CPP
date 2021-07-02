#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: virtual public FragTrap, virtual public ScavTrap
{
	public:
		// Contructors and destructor
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& src);
		// Operator
		DiamondTrap& operator=(const DiamondTrap& src);

		// WhoAmI func
		void whoAmI();
	private:
		std::string _name;
};

#endif
