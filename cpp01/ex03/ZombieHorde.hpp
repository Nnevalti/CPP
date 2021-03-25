#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
	private:
		Zombie* zombie;
		int nb_zombie;

	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void announce();
		std::string randomType();
		std::string randomName();
};

#endif
