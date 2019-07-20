/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 12:55:55 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 14:07:25 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout<< "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout<< "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &rhs)
{
	this->type = rhs.type;
	this->hp = rhs.hp;
}

void	RadScorpion::takeDamage(int damage)
{
	if(damage > 0)
		this->hp = this->hp - damage;
}

RadScorpion	& RadScorpion::operator=(RadScorpion const &rhs)
{
	if (this != &rhs)
	{
		this->hp = rhs.hp;
		this->type = type;
	}
	return (*this);
}
