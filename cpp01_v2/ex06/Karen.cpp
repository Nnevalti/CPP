#include "Karen.hpp"

typedef struct { std::string complain_name; void (Karen::*f)(void) const;} Complain_type;

Karen::Karen(){}

Karen::~Karen(){}

void Karen::debug(void) const
{
	std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void Karen::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void) const
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	int i;
	Complain_type c[] =
	{
			{"DEBUG", &Karen::debug},
			{"INFO", &Karen::info},
			{"WARNING", &Karen::warning},
			{"ERROR", &Karen::error}
	};
	for (i = 0; i < 4; i++)
	{
		if (c[i].complain_name == level)
		{
			(this->*c[i].f)();
		}
	}
	return ;
}
