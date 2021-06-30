#include "Zombie.hpp"

int main(void)
{
	Zombie		*zombie;
	Zombie		*zombie2 = new Zombie("Chad");

	zombie2->announce();
	delete zombie2;

	zombie = newZombie("Shimotsuki Ryuma");
	zombie->announce();
	delete zombie;

	zombie = randomChump();
	delete zombie;

	zombie = randomChump();
	delete zombie;

	zombie = randomChump();
	delete zombie;

	zombie = randomChump();
	delete zombie;

	zombie = randomChump();
	delete zombie;
}
