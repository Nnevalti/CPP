#ifndef ZOTE_HPP
# define ZOTE_HPP

# include <iostream>
# include "Victim.hpp"

class Zote : public Victim
{
	public:
		~Zote();
		Zote(std::string name);
		Zote(const Zote& src);
		Zote& operator=(const Zote& src);
		void getPolymorphed() const;
	private:
		Zote();
};

#endif
