#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
};

Zombie*	randomChump(void);
Zombie*	newZombie(std::string name);
Zombie* ZombieHorde(int N, std::string name);


#endif
