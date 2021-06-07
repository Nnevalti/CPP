#include "Squad.hpp"

Squad::Squad() : _count(0), _units(NULL)
{
	return ;
}

Squad::Squad(const Squad& src)
{
	*this = src;
	return ;
}

Squad::~Squad()
{
	t_units *next;

   for(int i = 0; i < this->_count; i++)
   {
	   next = this->_units->_next;
	   delete this->_units->_marine;
	   delete this->_units;
	   this->_units = next;
   }
}

Squad& Squad::operator=(const Squad& src)
{
	t_units *units;
	t_units *next;

	for(int i = 0; i < this->_count; i++)
	{
		next = this->_units->_next;
		delete this->_units->_marine;
		delete this->_units;
		this->_units = next;
	}
   units = src._units;
   for (int i = 0; i < src._count; i++)
   {
	   this->push(units->_marine->clone());
	   units = units->_next;
   }
   return (*this);
}

int Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine* Squad::getUnit(int index) const
{
	t_units *current;

	current = this->_units;
	if (index >= 0 && index < this->_count)
	{
		while (index--)
			current = current->_next;
		return (current->_marine);
	}
	return (NULL);
}

int Squad::push(ISpaceMarine* marine)
{
	t_units *current;

	current = this->_units;
	if (!marine)
		return (1);
	if (!current)
	{
		this->_units = new t_units;
		this->_units->_next = NULL;
		this->_units->_marine = marine;
		this->_count += 1;
		return (0);
	}
	while (current->_next)
		current = current->_next;
	current->_next = new t_units;
	current = current->_next;
	current->_marine = marine;
	current->_next = NULL;
	this->_count += 1;
	return (0);
}
