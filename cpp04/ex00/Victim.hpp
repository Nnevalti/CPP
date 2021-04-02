#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	public:
		~Victim();
		Victim(std::string name);
		Victim(const Victim& src);
		Victim& operator=(const Victim& src);
		const std::string& getName() const;
		void setName(std::string name);
		virtual void getPolymorphed() const;
	protected:
		std::string _name;
	private:
		Victim();
};

std::ostream& operator<<(std::ostream& os, const Victim& rhs);

#endif
