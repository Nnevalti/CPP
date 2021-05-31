#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& src);
		virtual ~Ice();
		Ice& operator=(const Ice& src);

		// Method
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
