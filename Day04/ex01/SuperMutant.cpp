/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 12:42:31 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 13:01:20 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout<< "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout<< "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &rhs)
{
	this->type = rhs.type;
	this->hp = rhs.hp;
}

void	SuperMutant::takeDamage(int damage)
{
	if(damage > 0)
		this->hp = this->hp - damage  + 3;
}

SuperMutant	& SuperMutant::operator=(SuperMutant const &rhs)
{
	if (this != &rhs)
	{
		this->hp = rhs.hp;
		this->type = type;
	}
	return (*this);
}
