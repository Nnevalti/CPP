#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	protected:
		std::string	_name;
		AMateria*	_inventory[4];

	public:
		// Coplien
		Character(std::string name);
		~Character();
		Character(const Character& src);
		Character& operator=(const Character& src);

		// Getter
		std::string const & getName() const;

		// Method
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
