/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:26:27 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 14:09:55 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{

}

Enemy::~Enemy()
{

}

Enemy::Enemy(int hp, std::string const& type)
{
	this->hp = hp;
	this->type = type;
}

int		Enemy::getHP() const
{
	return this->hp;
}

std::string		Enemy::getType() const
{
	return this->type;
}

Enemy	& Enemy::operator=(Enemy const &rhs)
{
	if (this != &rhs)
	{
		this->hp = rhs.hp;
		this->type = type;
	}
	return (*this);
}

Enemy::Enemy(const Enemy &rhs)
{
	this->type = rhs.type;
	this->hp = rhs.hp;
}


void	Enemy::takeDamage(int damage)
{
	if(damage >= 0)
		this->hp -= damage;
}
