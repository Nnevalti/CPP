#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
	private:
		std::string	name;
		std::string	size;
		std::string	color;
		int			age;

	public:
		Pony(std::string name, std::string size, std::string color, int age);
		~Pony();
};

#endif
