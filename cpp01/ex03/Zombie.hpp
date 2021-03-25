#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
		std::string type;

	public:
		Zombie(std::string name, std::string type);
		Zombie();
		~Zombie(void);
		void setName(std::string name);
		void setType(std::string type);
		void announce(void);
};

#endif
