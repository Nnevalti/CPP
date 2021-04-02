#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character();
		virtual ~Character();
		Character(std::string const & name);
		Character(const Character& src);
		Character& operator=(const Character& src);

		void				recoverAP();
		void				equip(AWeapon* weapon);
		void				attack(Enemy* enemy);

		std::string const	getName() const;
		int					getAPoint() const;
		AWeapon				*getWeapon() const;
	private:
		std::string			_name;
		int					_aPoint;
		AWeapon				*_weapon;
};

std::ostream& operator<<(std::ostream& os, const Character& rhs);

#endif
