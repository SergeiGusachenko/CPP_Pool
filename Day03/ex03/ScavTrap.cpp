/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 10:54:09 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 17:37:18 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
	srand(time(0));
		this->name = rhs.name;
		this->hit_p = rhs.hit_p;
		this->max_p = rhs.max_p;
		this->energy_p = rhs.energy_p;
		this->max_energy_p = rhs.max_energy_p;
		this->level = rhs.level;
		this->melee_attack_damage = rhs.melee_attack_damage;
		this->range_attack_damage = rhs.range_attack_damage;
		this->armor_damage_reduction = rhs.armor_damage_reduction;
	std::cout << "Copy Constructor Called: [" << this->name << "] I have an IDEA!" << std::endl;
	return;
}
