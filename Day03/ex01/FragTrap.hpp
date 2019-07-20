/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 23:30:02 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 12:22:34 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAHTRAP_HPP
# define GRAHTRAP_HPP
#include <string.h>
#include <iostream>

class FragTrap
{
	private:

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
		void	vaulthunter_dot_exe(std::string const & target);
		FragTrap();
		FragTrap(FragTrap const &rhs);
		FragTrap(std::string name);
		~FragTrap();
		void rangedAttack(std::string const & target);
		void invisibleAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		FragTrap & operator=(FragTrap const &rhs);
		std::string		getName();
		void	sqlInjectionAttack(std::string const & target);
		unsigned int		getSqlInjectionAttackDamage();
		int			getRangedAttack();
		int			getMeleeAttackDamage();
		unsigned int 		getInvisibleAttackDamage();
		void	smallAttack(std::string const & target);
		unsigned int 		getSmallAttackDamage();

};
#endif
