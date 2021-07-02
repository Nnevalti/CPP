#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "Constructor :" << std::endl;
	ScavTrap scavTrap("ScavTrap");
	ScavTrap scavTrapCopy;

	std::cout << "\nCopy operator :" << std::endl;
	// ScavTrap copy operator
	scavTrapCopy = scavTrap;
	scavTrapCopy.setName("ScavTrapCopy");

	// SCAVTRAP TEST
	// ScavTrap attack
	std::cout << "\nAttack test :" << std::endl;
	scavTrap.attack(scavTrapCopy.getName());
	scavTrapCopy.takeDamage(scavTrap.getAttackDamage());
	// ClapTrap beRepaired
	std::cout << "\nRepair test :" << std::endl;
	scavTrapCopy.beRepaired(10);
	scavTrap.beRepaired(1);

	std::cout << "\nGuard Gate test :" << std::endl;
	scavTrap.guardGate();

	std::cout << "\nDestructor :" << std::endl;
	return (0);
}
