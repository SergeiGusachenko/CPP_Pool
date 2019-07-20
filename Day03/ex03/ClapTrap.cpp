/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:58:03 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 18:30:26 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
		this->name = name;
		this->hit_p = 100;
		this->max_p = 100;
		this->energy_p = 100;
		this->max_energy_p = 100;
		this->level = 1;
		this->melee_attack_damage = 30;
		this->range_attack_damage = 20;
		this->armor_damage_reduction = 5;
		this->invisible_attack_damage = 25;
		std::cout << "ClapTrap constructor !"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
		this->name = rhs.name;
		this->hit_p = rhs.hit_p;
		this->max_p = rhs.max_p;
		this->energy_p = rhs.energy_p;
		this->max_energy_p = rhs.max_energy_p;
		this->level = rhs.level;
		this->melee_attack_damage = rhs.melee_attack_damage;
		this->range_attack_damage = rhs.range_attack_damage;
		this->armor_damage_reduction = rhs.armor_damage_reduction;
		std::cout << this->name<<" Directive one: Protect humanity! Directive two: \
Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

ClapTrap &ClapTrap::operator = (ClapTrap const &rhs)
{
	this->name = rhs.name;
	this->hit_p = rhs.hit_p;
	this->max_p = rhs.max_p;
	this->energy_p = rhs.energy_p;
	this->max_energy_p = rhs.max_energy_p;
	this->level = rhs.level;
	this->melee_attack_damage = rhs.melee_attack_damage;
	this->range_attack_damage = rhs.range_attack_damage;
	this->armor_damage_reduction = rhs.armor_damage_reduction;
	return (*this);
}

ClapTrap::ClapTrap()
{
		this->hit_p = 100;
		this->max_p = 100;
		this->energy_p = 100;
		this->max_energy_p = 100;
		this->level = 1;
		this->melee_attack_damage = 30;
		this->range_attack_damage = 20;
		this->armor_damage_reduction = 5;
		this->invisible_attack_damage = 25;
}

std::string ClapTrap :: challenges[5] = {
	"Hello, newcomer! Find me a lemon, and this door shall be yours.",
	"Is the cake a lie?",
	"Tell me a joke, and maybe I'll consider opening. Wait, that's a great joke!",
	"I'm SC4V-TP. I won't let you go through, unless you solve my riddle.",
	"Fetch me a mojito, and I'll call quits on this one."
};


void ClapTrap::challengeNewcomer(std::string const & target)
{
	std::cout << this->name << ClapTrap::challenges[std::rand() % 5]
		<< std::endl;
	std::cout << " * Challenged " << target << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout <<  "Clap Trap destructor !" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout <<this->name<<" attacks "<< target<<"  at range, causing " << this->range_attack_damage << " points of damage ! "<<std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->name << " attacks " << target \
	<< " with memes, causing over " << this->melee_attack_damage \
	<< " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage;

	damage = amount - this->armor_damage_reduction;
	if (damage > this->hit_p)
	{
		this->hit_p = 0;
		std::cout << this->name << ": LOL I'm ded already... X_X" << std::endl;
	}
	else
	{
		this->hit_p -= damage;
		std::cout << this->name << ": I'm still alive. :D" << std::endl;
		std::cout << "Armour reduction: " << this->armor_damage_reduction\
		<< std::endl;
		std::cout << "Damage taken: " << damage << std::endl;
		std::cout << "HP left: " << this->hit_p << " / " \
		<< this->max_p << std::endl;
	}
}

unsigned int		ClapTrap::getInvisibleAttackDamage()
{
	return this->invisible_attack_damage;
}

void	 ClapTrap::invisibleAttack(std::string const & target)
{
	std::cout << this->name << " attacks " << target \
	<< " absolutly invisible" << this->invisible_attack_damage \
	<< " points of damage !" << std::endl;
}

unsigned int		ClapTrap::getSqlInjectionAttackDamage()
{
	return this->sql_injection_damage;
}

void	 ClapTrap::sqlInjectionAttack(std::string const & target)
{
	std::cout <<  this->name << " attacks " << target \
	<< " sql injection" << this->invisible_attack_damage \
	<< " points of damage !" << std::endl;
}

void	 ClapTrap::smallAttack(std::string const & target)
{
	std::cout << this->name << " attacks " << target \
	<< " small" << this->invisible_attack_damage \
	<< " points of damage !" << std::endl;
}

unsigned int ClapTrap::getSmallAttackDamage()
{
	return this->small_attack_damage;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_p < amount)
		std::cout << this->name << ": Not enough energy... " << std::endl;
	else
	{
		this->energy_p -= amount;
		this->hit_p = amount + this->hit_p;
		std::cout << this->name << ": I'm healing myself... " << std::endl;
		std::cout << "HP points: " << this->hit_p << std::endl;
	}
	std::cout << "Energy points left: " << this->energy_p << std::endl;
}

int		ClapTrap::getMeleeAttackDamage()
{
	return this->melee_attack_damage;
}

std::string ClapTrap::getName()
{
	return this->name;
}

int	ClapTrap::getRangedAttack()
{
	return this->range_attack_damage;
}
