#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISquad* vlc = new Squad;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl << "MORE TEST" << std::endl << std::endl;
	vlc->getUnit(0)->battleCry();
    vlc->getUnit(1)->battleCry();
    vlc->getUnit(0)->rangedAttack();
    vlc->getUnit(1)->rangedAttack();
    vlc->getUnit(0)->meleeAttack();
    vlc->getUnit(1)->meleeAttack();

	delete vlc;

	return 0;
}
