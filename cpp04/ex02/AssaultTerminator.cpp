# include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& src)
{
	*this = src;
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator& src)
{
	(void)src;
	std::cout << "* teleports from space *" << std::endl;
	return (*this);
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;

}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attaque with chainfists *" << std::endl;

}
