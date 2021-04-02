#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		// Contructors and destructor
		NinjaTrap();
		~NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap& src);
		// Operator
		NinjaTrap& operator=(const NinjaTrap& src);
		// Classical attack
		void meleeAttack(std::string const& target);
		void rangedAttack(std::string const& target);
		// ninjaShoeBox attack
		void ninjaShoeBox(ClapTrap& clap);
		void ninjaShoeBox(FragTrap& frag);
		void ninjaShoeBox(ScavTrap& scav);
		void ninjaShoeBox(NinjaTrap& ninja);

};

#endif
