#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap fragTrap("FragTrap");
	FragTrap fragTrapCopy;

	ScavTrap scavTrap("ScavTrap");
	ScavTrap scavTrapCopy;

	// FragTrap copy operator
	fragTrapCopy = fragTrap;
	fragTrapCopy.setName("FragTrapCopy");
	// ScavTrap Copy operator
	scavTrapCopy = scavTrap;
	scavTrapCopy.setName("ScavTrapCopy");

	// FRAGTRAP TEST
	// FragTrap ranged attack
	fragTrap.rangedAttack(fragTrapCopy.getName());
	fragTrapCopy.takeDamage(fragTrap.getRangedAttackDamage());
	// FragTrap beRepaired
	fragTrapCopy.beRepaired(60);
	fragTrap.beRepaired(1);
	// fragTrap meleeAttack
	fragTrap.meleeAttack(fragTrapCopy.getName());
	fragTrapCopy.takeDamage(fragTrap.getMeleeAttackDamage());
	fragTrapCopy.beRepaired(100);
	// vaulhunter_dot_exe attack
	fragTrap.vaulhunter_dot_exe(fragTrapCopy.getName());
	fragTrapCopy.takeDamage(fragTrap.getVaulhunterAttackDamage());
	fragTrap.vaulhunter_dot_exe(fragTrapCopy.getName());
	fragTrapCopy.takeDamage(fragTrap.getVaulhunterAttackDamage());
	fragTrap.vaulhunter_dot_exe(fragTrapCopy.getName());
	fragTrapCopy.takeDamage(fragTrap.getVaulhunterAttackDamage());
	fragTrap.vaulhunter_dot_exe(fragTrapCopy.getName());
	fragTrapCopy.takeDamage(fragTrap.getVaulhunterAttackDamage());
	fragTrap.vaulhunter_dot_exe(fragTrapCopy.getName());
	fragTrapCopy.takeDamage(fragTrap.getVaulhunterAttackDamage());

	// SCAVTRAP TEST
	// ScavTrap meleeAttack
	scavTrap.meleeAttack(scavTrapCopy.getName());
	scavTrapCopy.takeDamage(scavTrap.getMeleeAttackDamage());
	// ScavTrap rangedAttack
	scavTrap.rangedAttack(scavTrapCopy.getName());
	scavTrapCopy.takeDamage(scavTrap.getRangedAttackDamage());
	// challengeNewcomer attack
	scavTrap.challengeNewcomer(scavTrapCopy.getName());
	scavTrap.challengeNewcomer(scavTrapCopy.getName());
	scavTrap.challengeNewcomer(scavTrapCopy.getName());
	scavTrap.challengeNewcomer(scavTrapCopy.getName());
	scavTrap.challengeNewcomer(scavTrapCopy.getName());

	return (0);
}
