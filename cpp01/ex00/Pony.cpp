#include "Pony.hpp"

Pony::Pony(std::string name, std::string size, std::string color, int age) : name(name), size(size), color(color), age(age)
{
	std::cout << name << " is a " << age << " years old " << size << " " << color << " Pony !" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Rest in peace " << name << " the " << size << " " << color << " Pony..." << std::endl;
	std::cout << std::endl;
}
