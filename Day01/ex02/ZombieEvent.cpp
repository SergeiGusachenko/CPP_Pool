/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 13:12:50 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/16 16:50:33 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{

}

ZombieEvent::~ZombieEvent()
{

}


Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	zombie->announce();
	return (zombie);
}

void	ZombieEvent::setZombieType(Zombie *zombie)
{
	std::string zType[6] = {"Biters", "Crawlies", "Heads","Beaters", "Crimson", "Dead"};
	int numType;
	srand (time(NULL));
	numType = rand() % 5;
	zombie->setType(zType[numType]);
}
