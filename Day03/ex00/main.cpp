/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:50:56 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 10:39:52 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main()
{
	std::cout << "BATTLE CRY"<< std::endl;
	FragTrap mr_popo = FragTrap("Mr. Popo");
	FragTrap goku = FragTrap("Goku");
	goku.takeDamage(mr_popo.getMeleeAttackDamage());
	mr_popo.takeDamage(goku.getRangedAttack());
	mr_popo.takeDamage(goku.getSqlInjectionAttackDamage());
	mr_popo.vaulthunter_dot_exe(goku.getName());
	goku.vaulthunter_dot_exe(mr_popo.getName());
	goku.vaulthunter_dot_exe(mr_popo.getName());
	goku.vaulthunter_dot_exe(mr_popo.getName());
	goku.vaulthunter_dot_exe(mr_popo.getName());
	goku.vaulthunter_dot_exe(mr_popo.getName());
	goku.vaulthunter_dot_exe(mr_popo.getName());
	mr_popo = goku;
	return 0;
}
