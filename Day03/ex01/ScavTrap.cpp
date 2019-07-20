/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 10:54:09 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 12:30:16 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(ScavTrap &obj)
{
	srand(time(0));
	*this = obj;
	std::cout << "Copy Constructor Called: [" << this->name << "] I have an IDEA!" << std::endl;
	return;
}

ScavTrap::ScavTrap()
{
	this->hit_p = 100;
	this->max_p = 100;
	this->energy_p = 50;
	this->max_energy_p = 50;
	this->level = 1;
	this->melee_attack_damage = 20;
	this->range_attack_damage = 15;
	this->armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hit_p = 100;
	this->max_p = 100;
	this->energy_p = 50;
	this->max_energy_p = 50;
	this->level = 1;
	this->melee_attack_damage = 20;
	this->range_attack_damage = 15;
	this->armor_damage_reduction = 3;
	std::cout << "SK4_TP constructor created : "<<name<< std::endl;
}


void ScavTrap::rangedAttack(std::string const & target)
{

	std::cout <<"SK4_TP-TP "<<this->name<<" attacks "<< target<<"  at range, causing " << this->range_attack_damage << " points of damage ! "<<std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SK4_TP " << this->name << " attacks " << target \
	<< " with memes, causing over " << this->melee_attack_damage \
	<< " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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

unsigned int		ScavTrap::getInvisibleAttackDamage()
{
	return this->invisible_attack_damage;
}

void	 ScavTrap::invisibleAttack(std::string const & target)
{
	std::cout << "SK4_TP " << this->name << " attacks " << target \
	<< " absolutly invisible" << this->invisible_attack_damage \
	<< " points of damage !" << std::endl;
}

unsigned int		ScavTrap::getSqlInjectionAttackDamage()
{
	return this->sql_injection_damage;
}

void	 ScavTrap::sqlInjectionAttack(std::string const & target)
{
	std::cout << "SK4_TP " << this->name << " attacks " << target \
	<< " sql injection" << this->invisible_attack_damage \
	<< " points of damage !" << std::endl;
}

void	 ScavTrap::smallAttack(std::string const & target)
{
	std::cout << "SK4_TP " << this->name << " attacks " << target \
	<< " small" << this->invisible_attack_damage \
	<< " points of damage !" << std::endl;
}

unsigned int ScavTrap::getSmallAttackDamage()
{
	return this->small_attack_damage;
}

void ScavTrap::beRepaired(unsigned int amount)
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

std::string ScavTrap::challenges[5] = {
	"Hello, newcomer! Find me a lemon, and this door shall be yours.",
	"Is the cake a lie?",
	"Tell me a joke, and maybe I'll consider opening. Wait, that's a great joke!",
	"I'm SC4V-TP. I won't let you go through, unless you solve my riddle.",
	"Fetch me a mojito, and I'll call quits on this one."
};

ScavTrap &ScavTrap::operator = (ScavTrap const &rhs)
{
	std::cout << " SC4V-TP operator = ["<<this->name<<" = "<< rhs.name <<" ]"<< std::endl;
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

void ScavTrap::challengeNewcomer(std::string const & target)
{
	std::cout << "<SC4V-TP> " << ScavTrap::challenges[std::rand() % 5]
		<< std::endl;
	std::cout << " * Challenged " << target << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<SC4V-TP> Destructor Called: [" << this->name << "] Oh god I can't stop!" << std::endl;
}
