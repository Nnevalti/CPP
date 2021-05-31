#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	return ;
}

Cure::Cure(const Cure& src): AMateria(src)
{
	return ;
}

Cure::~Cure(){}

Cure& Cure::operator=(const Cure& src)
{
	if (this == &src)
		return (*this);
	AMateria::operator=(src);
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
	return ;
}
