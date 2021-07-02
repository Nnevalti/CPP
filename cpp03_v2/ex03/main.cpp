#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	std::cout << "Constructor :" << std::endl;
	DiamondTrap diamondTrap("DiamondTrap");
	DiamondTrap diamondTrapCopy;

	std::cout << "\nCopy operator :" << std::endl;
	// DiamondTrap copy operator
	diamondTrapCopy = diamondTrap;
	diamondTrapCopy.setName("DiamondTrapCopy");

	// DIAMONDTRAP TEST
	// DiamondTrap attack
	std::cout << "\nAttack test :" << std::endl;
	diamondTrap.attack(diamondTrapCopy.getName());
	diamondTrapCopy.takeDamage(diamondTrap.getAttackDamage());
	// ClapTrap beRepaired
	std::cout << "\nRepair test :" << std::endl;
	diamondTrapCopy.beRepaired(10);
	diamondTrap.beRepaired(1);

	std::cout << "\nGuard Gate test :" << std::endl;
	diamondTrap.guardGate();

	std::cout << "\nHigh Five test :" << std::endl;
	diamondTrap.highFiveGuys();

	std::cout << "\nWho Am I test :" << std::endl;
	diamondTrap.whoAmI();

	std::cout << "\nDestructor :" << std::endl;
	return (0);
}
