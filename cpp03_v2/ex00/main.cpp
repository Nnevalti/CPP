#include "ClapTrap.hpp"

int main()
{
	std::cout << "Consteuctor :" << std::endl;
	ClapTrap clapTrap("ClapTrap");
	ClapTrap clapTrapCopy;

	// ClapTrap copy operator
	std::cout << "\nCopy operator :" << std::endl;
	clapTrapCopy = clapTrap;
	clapTrapCopy.setName("ClapTrapCopy");

	// CLAPTRAP TEST
	// ClapTrap attack
	std::cout << "\nAttack test :" << std::endl;
	clapTrap.attack(clapTrapCopy.getName());
	clapTrapCopy.takeDamage(clapTrap.getAttackDamage());
	// ClapTrap beRepaired
	std::cout << "\nRepair test :" << std::endl;
	clapTrapCopy.beRepaired(10);
	clapTrap.beRepaired(1);

	std::cout << "\nDestructor :" << std::endl;
	return (0);
}
