#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : nb_zombie(n)
{
	std::srand(time(NULL) + clock());
	Zombie *zombie = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		zombie[i].setName(this->randomName());
		zombie[i].setType(this->randomType());
	}
	this->zombie = zombie;
	this->announce();
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "The zombie horde returned to the ground !" << std::endl;
	delete [] this->zombie;
}

std::string ZombieHorde::randomType()
{
	std::string types[10] = {"Common Infected", "Uncommon Infected", "Boomer",
	"Jockey", "Smoker", "Charger", "Hunter", "Spitter", "Tank", "Witch"};

	return (types[rand() % 10]);
}

std::string ZombieHorde::randomName()
{
	std::string names[30] = {"Zephyr Brack", "Axel Shadowend", "Jasper Winter",
	"Kapral Whitmore", "Peregrine Marth", "Viktor Zorander", "Oklarth Darkmore",
	"Richard Creighton", "Moldark Dred", "Kellam Moonfall", "Stone Calarook",
	"Chalice Sharpe", "Inigo Dukes", "Voss Morelli", "Sully Trevils",
	"Amada Snow", "Fark Marth", "Cinder Church", "Carmin Breedlove",
	"Moon Labyrinth", "Eldia Shadowsoul", "Magwina Latimer",
	"Misericordia Willow", "Lulu Pickerin", "Carmine Zul", "Cat Trevils",
	"Xoxo Krauss", "Ymo Denholm", "Arlin Strain", "Princessa Drabek"};

	return (names[rand() % 30]);
}

void ZombieHorde::announce()
{
	for (int i = 0; i < this->nb_zombie; i++)
		this->zombie[i].announce();
}
