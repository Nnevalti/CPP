#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	private:

	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &src);
		virtual ~AssaultTerminator();

		AssaultTerminator& operator=(const AssaultTerminator &src);

		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif
