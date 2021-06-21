#include <iostream>
#include <iomanip>
#include <float.h>
#include <math.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: usage ./convert [str]" << std::endl;
		return (0);
	}
	std::string str = av[1];
	double d = atof(av[1]);
	size_t ppos = str.find(".");
	int precision = 0;

	if (ppos == std::string::npos || (ppos + 1) == str.length())
	{
		precision = 1;
	}
	else
	{
		for (int i = 0; isdigit(str[ppos + i + 1]); i++)
		{
			precision++;
		}

	}

	// char conversion
	if (isinf(d) || isnan(d) || d < CHAR_MIN || d > CHAR_MAX)
		std::cout << "char: Impossible" << std::endl;
	else if (isprint(static_cast<char>(d)))
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	// int conversion
	if (isinf(d) || isnan(d) || d < INT_MIN || d > INT_MAX)
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	// float conversion
	if (d < FLT_MIN || d > FLT_MAX)
		std::cout << "float: Impossible" << std::endl;
	else if (isinf(d))
		std::cout << "float: inff" << std::endl;
	else if (isnan(d))
		std::cout << "float: nanf" << std::endl;
	else
		std::cout << "float: " << std::setprecision(precision) << std::fixed << static_cast<float>(d) << "f" << std::endl;
	// double conversion
	if (isinf(d))
		std::cout << "double: inf" << std::endl;
	else if (isnan(d))
		std::cout << "double: nan" << std::endl;
	else
		std::cout << "double: " << std::setprecision(precision) << std::fixed << d << std::endl;
	return (0);
}
