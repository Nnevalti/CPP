#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
	public:
		Karen();
		~Karen();
		void debug(void) const;
		void info(void) const;
		void warning(void) const;
		void error(void) const;
		void complain(std::string level);
};

#endif
