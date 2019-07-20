/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 10:54:12 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 12:25:00 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include <string.h>
#include "FragTrap.hpp"
class ScavTrap
{
	private:
		std::string name;
		unsigned int hit_p;
		unsigned int max_p;
		unsigned int energy_p;
		unsigned int max_energy_p;
		unsigned int level;
		unsigned int melee_attack_damage;
		unsigned int range_attack_damage;
		unsigned int armor_damage_reduction;
		unsigned int invisible_attack_damage;
		unsigned int sql_injection_damage;
		unsigned int small_attack_damage;
	public:
						ScavTrap();
						ScavTrap(std::string name);
						ScavTrap(ScavTrap &obj);
						~ScavTrap();
	void 				rangedAttack(std::string const & target);
	void 				invisibleAttack(std::string const & target);
	void 				meleeAttack(std::string const & target);
	void 				takeDamage(unsigned int amount);
	void 				beRepaired(unsigned int amount);
	void 				sqlInjectionAttack(std::string const & target);
	unsigned int		getSqlInjectionAttackDamage();
	int					getRangedAttack();
	int					getMeleeAttackDamage();
	unsigned int 		getInvisibleAttackDamage();
	void				smallAttack(std::string const & target);
	unsigned int 		getSmallAttackDamage();
	void				challengeNewcomer(std::string const & target);
	ScavTrap & operator=(ScavTrap const &rhs);
	std::string static challenges[5];
};
#endif
