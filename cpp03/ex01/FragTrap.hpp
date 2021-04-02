#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
	public:
		// Contructors and destructor
		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
		// Operator
		FragTrap& operator=(const FragTrap& src);
		// Getters and setters
		std::string		getName();
		unsigned int	getMeleeAttackDamage();
		unsigned int	getRangedAttackDamage();
		unsigned int	getVaulhunterAttackDamage();
		unsigned int	getCryoAttackDamage();
		unsigned int	getGrenadeAttackDamage();
		unsigned int	getGunWizardAttackDamage();
		unsigned int	getSenselessSacrificeAttackDamage();
		unsigned int	getClapInTheBoxAttackDamage();
		void			setName(std::string newName);
		// Damage and repair
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
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
		// FragTrap attributes
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_maxHitPoint;
		unsigned int	_energyPoint;
		unsigned int	_maxEnergyPoint;
		unsigned int	_level;
		// Damage
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_vaulhunterAttackDamage;
		unsigned int	_armorDamageReduction;
		// Other damage
		unsigned int	_cryoAttackDamage;
		unsigned int	_grenadeAttackDamage;
		unsigned int	_gunWizardAttackDamage;
		unsigned int	_senselessSacrificeAttackDamage;
		unsigned int	_clapInTheBoxAttackDamage;
};

#endif
