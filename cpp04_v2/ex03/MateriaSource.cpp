#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_templates[i] = NULL;
	return ;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_templates[i] != NULL)
			delete this->_templates[i];
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	for (int i = 0; i < 4; i++)
		if (src._templates[i])
			this->_templates[i] = src._templates[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	if (this == &src)
		return (*this);
	for (int i = 0; i < 4; i++)
		if (src._templates[i])
			this->_templates[i] = src._templates[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	while (i < 4 && this->_templates[i] != NULL)
		i++;
	if (i < 4)
		this->_templates[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_templates[i] != NULL && this->_templates[i]->getType() == type)
			return (this->_templates[i]->clone());
	}
	return (NULL);
}
