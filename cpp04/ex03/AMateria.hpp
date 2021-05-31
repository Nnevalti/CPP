#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string   _type;
		unsigned int  _xp;

	public:
		// Coplien
		AMateria(std::string const& type);
		AMateria(const AMateria& src);
		virtual ~AMateria();
		AMateria& operator=(const AMateria& src);

		// Getter
		std::string const& getType() const;
		unsigned int getXP() const;

		// Method
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
