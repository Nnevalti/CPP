#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	public:
		AWeapon();
		virtual ~AWeapon();
		AWeapon(const AWeapon& src);
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon& operator=(const AWeapon& src);

		virtual void		attack() const = 0;

		std::string const	getName() const;
		int					getAPCost() const;
		int					getDamage() const;
	protected:
		std::string			_name;
		int					_apcost;
		int					_damage;
};

#endif
