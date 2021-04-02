#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
	public:
		// Contructors and destructor
		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		// Operator
		FragTrap& operator=(const FragTrap& src);
		// Getters and setters
		unsigned int	getVaulhunterAttackDamage();
		unsigned int	getCryoAttackDamage();
		unsigned int	getGrenadeAttackDamage();
		unsigned int	getGunWizardAttackDamage();
		unsigned int	getSenselessSacrificeAttackDamage();
		unsigned int	getClapInTheBoxAttackDamage();

		// Attack
		void meleeAttack(std::string const& target);
		void rangedAttack(std::string const& target);
		void vaulhunter_dot_exe(std::string const &target);
		// 5 other function
		void cryoAttack(std::string const& target);
		void grenadeAttack(std::string const& target);
		void gunWizardAttack(std::string const& target);
		void senselessSacrificeAttack(std::string const& target);
		void clapInTheBoxAttack(std::string const& target);

	private:
		// Damage
		unsigned int	_vaulhunterAttackDamage;
		// Other damage
		unsigned int	_cryoAttackDamage;
		unsigned int	_grenadeAttackDamage;
		unsigned int	_gunWizardAttackDamage;
		unsigned int	_senselessSacrificeAttackDamage;
		unsigned int	_clapInTheBoxAttackDamage;
};

#endif
