#include "Pony.hpp"

Pony::Pony(std::string name, std::string size, std::string color, int age) : name(name), size(size), color(color), age(age)
{
	std::cout << name << " is a " << age << " years old " << size << " " << color << " Pony !" << std::endl;
	if (name == "Tony Tony Chopper")
		std::cout << "Wait that's not a Pony it's a reindee.. A tanuki..." << std::endl;
}

Pony::~Pony(void)
{
	if (name == "Tony Tony Chopper")
		std::cout << "Rest in peace " << name << " the " << size << " " << color << " Reindee... Tanuki..." << std::endl;
	else
		std::cout << "Rest in peace " << name << " the " << size << " " << color << " Pony..." << std::endl;
}
