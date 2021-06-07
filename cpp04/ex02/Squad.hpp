#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	private:
		typedef struct s_units
		{
			ISpaceMarine* _marine;
			struct s_units* _next;
		}				t_units;

		int				_count;
		t_units*		_units;

	public:
		Squad();
		Squad(const Squad& src);
		virtual ~Squad();
		Squad& operator=(const Squad& src);

		virtual int				getCount() const;
		virtual ISpaceMarine*	getUnit(int index) const;
		virtual int				push(ISpaceMarine* marine);
};

#endif
