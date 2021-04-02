#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
	public:
		~Peon();
		Peon(std::string name);
		Peon& operator=(const Peon& src);
		void getPolymorphed() const;
	private:
		Peon();
};

#endif
