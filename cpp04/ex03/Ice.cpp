#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	return ;
}

Ice::Ice(const Ice& src): AMateria(src)
{
	return ;
}

Ice::~Ice(){}

Ice& Ice::operator=(const Ice& src)
{
	if (this == &src)
		return (*this);
	AMateria::operator=(src);
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
	return ;
}
