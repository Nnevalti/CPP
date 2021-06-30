#include "Zombie.hpp"

Zombie*	randomChump(void)
{
	std::srand(time(NULL) + clock());
	std::string names[30] = {"Zephyr Brack", "Axel Shadowend", "Jasper Winter",
	"Kapral Whitmore", "Peregrine Marth", "Viktor Zorander", "Oklarth Darkmore",
	"Richard Creighton", "Moldark Dred", "Kellam Moonfall", "Stone Calarook",
	"Chalice Sharpe", "Inigo Dukes", "Voss Morelli", "Sully Trevils",
	"Amada Snow", "Fark Marth", "Cinder Church", "Carmin Breedlove",
	"Moon Labyrinth", "Eldia Shadowsoul", "Magwina Latimer",
	"Misericordia Willow", "Lulu Pickerin", "Carmine Zul", "Cat Trevils",
	"Xoxo Krauss", "Ymo Denholm", "Arlin Strain", "Princessa Drabek"
	};
	Zombie* zombie = newZombie(names[rand() % 30]);
	zombie->announce();
	return (zombie);
}
