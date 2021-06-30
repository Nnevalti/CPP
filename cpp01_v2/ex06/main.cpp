#include "Karen.hpp"

static std::string	Level[] =
							{
								"DEBUG",
								"INFO",
								"WARNING",
								"ERROR"
							};

int findLevel(std::string level)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (level == Level[i])
			return (i);
	}
	return (i);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments.\nUsage: ./karenFilter [message]" << std::endl;
		return (0);
	}
	else
	{
		Karen karen;
		std::string level = av[1];
		int indexLevel = findLevel(level);

		switch (indexLevel)
		{
			case (0) :
				std::cout << "[ DEBUG ]" << std::endl;
				karen.complain(Level[indexLevel]);
				break ;
			case (1) :
				std::cout << "[ INFO ]" << std::endl;
				karen.complain(Level[indexLevel]);
				break ;
			case (2) :
				std::cout << "[ WARNING ]" << std::endl;
				karen.complain(Level[indexLevel]);
				break ;
			case (3) :
				std::cout << "[ ERROR ]" << std::endl;
				karen.complain(Level[indexLevel]);
				break ;
			default :
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	return 0;
}
