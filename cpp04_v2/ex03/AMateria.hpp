#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	private:
		AMateria();

	protected:
		std::string   _type;

	public:
		// Coplien
		AMateria(std::string const& type);
		AMateria(const AMateria& src);
		AMateria& operator=(const AMateria& src);
		virtual ~AMateria();

		// Getter
		std::string const& getType() const;

		// Method
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
