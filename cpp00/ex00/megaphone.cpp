#include <iostream>

void	to_uppercase(char *str)
{
	for (int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			to_uppercase(av[i]);
			std::cout << av[i];
		}
		std::cout << std::endl;
	}
	return 0;
}
