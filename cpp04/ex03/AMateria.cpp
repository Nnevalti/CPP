#include "AMateria.hpp"

AMateria::AMateria(std::string const& type): _type(type), _xp(0)
{
  return ;
}

AMateria::AMateria(const AMateria& src): _type(src._type), _xp(src._xp)
{
  return ;
}

AMateria::~AMateria()
{
  return ;
}

AMateria& AMateria::operator=(const AMateria& src)
{
  if (this == &src)
    return (*this);
  this->_xp = src._xp;
  return (*this);
}

std::string const& AMateria::getType() const { return (this->_type); }
unsigned int AMateria::getXP()const { return (this->_xp); }

void AMateria::use(ICharacter& target)
{
  (void)target;
  this->_xp += 10;
  return ;
}
