/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:58:19 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 18:41:20 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string.h>

class ClapTrap
{
protected:
		std::string  name;
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
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &rhs);
	ClapTrap 			& operator=(ClapTrap const &rhs);
	~ClapTrap();
	void				rangedAttack(std::string const & target);
	void				challengeNewcomer(std::string const & target);
	void				invisibleAttack(std::string const & target);
	void				meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				sqlInjectionAttack(std::string const & target);
	unsigned int		getSqlInjectionAttackDamage();
	int					getRangedAttack();
	int					getMeleeAttackDamage();
	unsigned int 		getInvisibleAttackDamage();
	void				smallAttack(std::string const & target);
	unsigned int 		getSmallAttackDamage();
	std::string static	challenges[5];
	std::string			getName();
////// IMPORTANT 	const char *className = typeid(this).name();   ////// IMPORTANT

};

#endif
