#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
	public:
		// Contructors and destructor
		SuperTrap();
		~SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap& src);
		// Operator
		SuperTrap& operator=(const SuperTrap& src);
		// Classical attack
		void meleeAttack(std::string const& target);
		void rangedAttack(std::string const& target);
};

#endif
