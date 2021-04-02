#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	public:
		Enemy();
		virtual ~Enemy();
		Enemy(int hp, std::string const& type);
		Enemy(const Enemy& src);
		Enemy& operator=(const Enemy& src);


		int					getHP() const;
		std::string const	getType() const;

		virtual void		takeDamage(int damage);
	protected:
		int					_hp;
		std::string			_type;
};
#endif
