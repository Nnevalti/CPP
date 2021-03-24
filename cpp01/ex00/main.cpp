#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(std::string name, std::string size, std::string color, int age)
{
	Pony *ponyStack = new Pony(name, size, color, age);
	delete ponyStack;

	return ;
}

void	ponyOnTheStack(std::string name, std::string size, std::string color, int age)
{
	Pony ponyHeap = Pony(name, size, color, age);

	return ;
}

int		main(void)
{
	ponyOnTheHeap("Pyro", "smol", "red", 10000);
	ponyOnTheStack("Darky", "huge", "black", 42);
	ponyOnTheHeap("Tony Tony Chopper", "big & smol", "beige", 17);
	ponyOnTheStack("Fulguro", "big", "cyan", 3);

}
