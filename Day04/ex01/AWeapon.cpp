/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 10:24:50 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 14:24:37 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->damage = damage;
	this->apcost = apcost;
}

AWeapon::AWeapon()
{

}

AWeapon::AWeapon(const AWeapon &rhs)
{
	this->name = rhs.name;
	this->apcost = rhs.apcost;
	this->damage = rhs.damage;
}

AWeapon	& AWeapon::operator=(AWeapon const &rhs)
{
	if (this != &rhs)
		this->name = rhs.name;
	return (*this);
}

int		AWeapon::getAPCost() const
{
	return this->apcost;
}

int		AWeapon::getDamage() const
{
	return this->damage;
}

std::string		AWeapon::getName() const
{
	return this->name;
}

AWeapon::~AWeapon()
{

}
