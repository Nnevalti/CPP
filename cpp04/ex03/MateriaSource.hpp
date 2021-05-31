#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _templates[4];
	public:
		// Coplien
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& src);
		MateriaSource& operator=(const MateriaSource& src);

		void learnMateria(AMateria* src);
		AMateria* createMateria(std::string const& type);
};

#endif
