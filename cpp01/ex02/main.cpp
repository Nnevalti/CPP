#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent event;
	Zombie		*zombie;
	Zombie		*zombie2 = new Zombie("Chad", "Handsome");

	zombie2->announce();
	delete zombie2;

	event.setZombieType("Samuraï");
	zombie = event.newZombie("Shimotsuki Ryuma");
	zombie->announce();
	delete zombie;

	event.setZombieType("Hunter");
	zombie = event.randomChump();
	delete zombie;

	event.setZombieType("Boomer");
	zombie = event.randomChump();
	delete zombie;

	event.setZombieType("Jockey");
	zombie = event.randomChump();
	delete zombie;

	event.setZombieType("Tank");
	zombie = event.randomChump();
	delete zombie;

	event.setZombieType("Witch");
	zombie = event.randomChump();
	delete zombie;
}
