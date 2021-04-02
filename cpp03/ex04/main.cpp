#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	FragTrap fragTrap("FragTrap");
	FragTrap fragTrapCopy;

	ScavTrap scavTrap("ScavTrap");
	ScavTrap scavTrapCopy;

	NinjaTrap ninjaTrap("NinjaTrap");
	NinjaTrap ninjaTrapCopy;

	ClapTrap clapTrap("ClapTrap");

	SuperTrap superTrap("SuperTrap");
	SuperTrap superTrapCopy;

	// FragTrap copy operator
	fragTrapCopy = fragTrap;
	fragTrapCopy.setName("FragTrapCopy");
	// ScavTrap Copy operator
	scavTrapCopy = scavTrap;
	scavTrapCopy.setName("ScavTrapCopy");
	// NinjaTrap copy operator
	ninjaTrapCopy = ninjaTrap;
	ninjaTrapCopy.setName("NinjaTrapcopy");
	// SuperTrap copy operator
	superTrapCopy = superTrap;
	superTrapCopy.setName("SuperTrapcopy");

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

	// NINJATRAP TEST
	// NinjaTrap meleeAttack
	ninjaTrap.meleeAttack(ninjaTrapCopy.getName());
	ninjaTrapCopy.takeDamage(ninjaTrap.getMeleeAttackDamage());
	// NinjaTrap rangedAttack
	ninjaTrap.rangedAttack(ninjaTrapCopy.getName());
	ninjaTrapCopy.takeDamage(ninjaTrap.getRangedAttackDamage());
	// NinjaTrap ninjaShoeBox method
	ninjaTrap.ninjaShoeBox(ninjaTrapCopy);
	ninjaTrap.ninjaShoeBox(fragTrapCopy);
	ninjaTrap.ninjaShoeBox(scavTrapCopy);
	ninjaTrap.ninjaShoeBox(clapTrap);

	// SUPERTRAP TEST
	// SuperTrap meleeAttack
	superTrap.meleeAttack(superTrapCopy.getName());
	superTrapCopy.takeDamage(superTrap.getMeleeAttackDamage());
	// NinjaTrap rangedAttack
	superTrap.rangedAttack(superTrapCopy.getName());
	superTrapCopy.takeDamage(superTrap.getRangedAttackDamage());
	// vaulhunter_dot_exe attack
	superTrap.vaulhunter_dot_exe(superTrapCopy.getName());
	superTrapCopy.takeDamage(superTrap.getVaulhunterAttackDamage());
	// NinjaTrap ninjaShoeBox method
	superTrap.ninjaShoeBox(ninjaTrapCopy);
	superTrap.ninjaShoeBox(fragTrapCopy);
	superTrap.ninjaShoeBox(scavTrapCopy);
	superTrap.ninjaShoeBox(clapTrap);

	return (0);
}
