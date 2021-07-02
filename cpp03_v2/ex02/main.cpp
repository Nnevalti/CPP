#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "Constructor :" << std::endl;
	FragTrap fragTrap("FragTrap");
	FragTrap fragTrapCopy;

	std::cout << "\nCopy operator :" << std::endl;
	// FragTrap copy operator
	fragTrapCopy = fragTrap;
	fragTrapCopy.setName("FragTrapCopy");

	// FRAGTRAP TEST
	// FragTrap attack
	std::cout << "\nAttack test :" << std::endl;
	fragTrap.attack(fragTrapCopy.getName());
	fragTrapCopy.takeDamage(fragTrap.getAttackDamage());
	// ClapTrap beRepaired
	std::cout << "\nRepair test :" << std::endl;
	fragTrapCopy.beRepaired(10);
	fragTrap.beRepaired(1);

	std::cout << "\nHigh Five test :" << std::endl;
	fragTrap.highFiveGuys();

	std::cout << "\nDestructor :" << std::endl;
	return (0);
}
