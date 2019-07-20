/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:50:56 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 17:21:31 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
	ClapTrap parent = ClapTrap("parent");
	std::cout << "BATTLE CRY"<< std::endl;
	FragTrap mr_popo = FragTrap("Mr. Popo");
	FragTrap goku = FragTrap("Goku");
	ScavTrap sc = ScavTrap("ASD");
	goku.takeDamage(mr_popo.getMeleeAttackDamage());
	mr_popo.takeDamage(goku.getRangedAttack());
	mr_popo.takeDamage(goku.getSqlInjectionAttackDamage());
	mr_popo.vaulthunter_dot_exe(goku.getName());

	sc.challengeNewcomer(goku.getName());
	mr_popo = goku;
	return 0;
}
