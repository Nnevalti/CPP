#include "Zombie.hpp"

int main(void)
{
	Zombie* horde1 = ZombieHorde(10, "Chad");
	Zombie* horde2 = ZombieHorde(5, "Zote");

	delete [] horde1;
	delete [] horde2;
	return (0);
}
