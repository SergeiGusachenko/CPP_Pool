/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:02:55 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 14:11:52 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"


PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist(const PowerFist &src)
{
	*this = src;
	return ;
}

PowerFist::~PowerFist()
{

}

PowerFist &PowerFist::operator= (const PowerFist &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->apcost = rhs.apcost;
		this->damage = rhs.damage;
	}
	return (*this);
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
