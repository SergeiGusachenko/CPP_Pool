/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:43:28 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/16 17:36:31 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
	Zombie *zombe;
	ZombieEvent zE = ZombieEvent();
	zombe = zE.newZombie("ASDAS");
	zE.setZombieType(zombe);
	zombe->announce();
	delete zombe;
}
