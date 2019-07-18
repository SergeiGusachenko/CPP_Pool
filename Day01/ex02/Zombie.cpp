/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 13:05:17 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/16 17:27:21 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout<<this->name + " " + this->type + " Braiiiiiiinnnssss..."<< std::endl;
}

Zombie::~Zombie()
{
	std::cout <<this->name + " is dead"<< std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

void	Zombie::randomChump()
{
	srand (time(NULL));
	ZombieEvent zomEv = ZombieEvent();
	int position;
	std::string names[6] = {"Ankle","Creepy","Crimson","Beaters","Dead", "Dead"};
	position = rand() % 5;
	Zombie *zomb =new Zombie(names[position]);
	zomEv.setZombieType(zomb);
	zomb->announce();
	delete zomb;
}

void	Zombie::setType(std::string type)
{
	this->type = type;
}
