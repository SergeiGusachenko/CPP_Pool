/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:50:56 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 18:50:04 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	ClapTrap parent = ClapTrap("parent");
	std::cout << "BATTLE CRY"<< std::endl;
	FragTrap mr_popo = FragTrap("Mr. Popo");
	FragTrap goku = FragTrap("Goku");
	ScavTrap sc = ScavTrap("ASD");
	NinjaTrap nj = NinjaTrap("Ninja");
	nj.ninjaShoebox(sc);
	return 0;
}
