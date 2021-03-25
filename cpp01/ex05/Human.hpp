#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Brain.hpp"

class Human
{
	private:
		Brain const brain;

	public:
		Human();
		~Human();
		Brain const& getBrain();
		std::string identify() const;
};

#endif
