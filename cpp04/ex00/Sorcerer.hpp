#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
		~Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer& src);
		Sorcerer& operator=(const Sorcerer& src);
		const std::string& getName() const;
		const std::string& getTitle() const;
		void setName(std::string name);
		void polymorph(const Victim& victim);
	protected:
		std::string _name;
		std::string _title;
	private:
		Sorcerer();
};

std::ostream& operator<<(std::ostream& os, const Sorcerer& rhs);

#endif
