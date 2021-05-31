#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& src);
		virtual ~Cure();
		Cure& operator=(const Cure& src);

		// Method
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
