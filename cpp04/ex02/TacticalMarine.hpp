#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	private:

	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine& src);
		virtual ~TacticalMarine();

		TacticalMarine& operator=(const TacticalMarine& src);

		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif
