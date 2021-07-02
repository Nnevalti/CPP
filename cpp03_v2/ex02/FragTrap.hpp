#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		// Contructors and destructor
		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
		// Operator
		FragTrap& operator=(const FragTrap& src);

		// GuardGate func
		void highFiveGuys();
};

#endif
