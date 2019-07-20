/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:05:38 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 14:28:00 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{

}

Character::Character(std::string const & name)
{
	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
}

Character	& Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->ap = rhs.ap;
		this->name = name;
		this->weapon = rhs.weapon;
	}
	return (*this);
}

void	Character::recoverAP()
{
	this->ap += 10;
}

void	Character::equip(AWeapon* weapon)
{
	this->weapon = weapon;
}

void	Character::attack(Enemy* enemy)
{
	int	ap_cost;
	 if (this->weapon != NULL && enemy != NULL)
	{
		ap_cost = this->weapon->getAPCost();
		if (this->ap - ap_cost >= 0)
		{
			enemy->takeDamage(this->weapon->getDamage());
			this->ap -= ap_cost;
			std::cout << this->name << " attacks " << enemy->getType() \
			<< " with a " << this->weapon->getName() << std::endl;
			this->weapon->attack();
			if (enemy->getHP() <= 0)
				delete enemy;
		}
	}
}

AWeapon*		Character::getWeapon() const
{
	return this->weapon;
}

int 	Character::getAp() const
{
	return this->ap;
}

std::ostream &operator<< (std::ostream &out, const Character &rhs)
{
	if (rhs.getWeapon() != NULL)
	{
		out << rhs.getName() << " has " << rhs.getAp() \
			 << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	}
	else
	{
		out << rhs.getName() << " has " << rhs.getAp() \
			<< " AP and is unarmend" << std::endl;
	}
	return (out);
}

std::string Character::getName() const
{
	return this->name;
}

Character::Character(const Character &rhs)
{
	this->name = rhs.name;
	this->name = rhs.name;
}

Character::~Character()
{
}
