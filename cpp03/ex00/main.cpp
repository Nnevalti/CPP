#include "FragTrap.hpp"

int main()
{
	FragTrap fragTrap("FragTrap");
	FragTrap fragTrapCopy;

	// FragTrap copy operator
	fragTrapCopy = fragTrap;
	fragTrapCopy.setName("FragTrapCopy");

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

	return (0);
}
