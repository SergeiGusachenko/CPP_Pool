/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 23:29:45 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 16:38:23 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
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
		std::cout << "<FR4G-TP> Directive one: Protect humanity! Directive two: \
Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
		this->small_attack_damage = 25;
		this->invisible_attack_damage = 25;
		this->name = name;
		this->hit_p = 100;
		this->max_p = 100;
		this->energy_p = 100;
		this->max_energy_p = 100;
		this->level = 1;
		this->melee_attack_damage = 30;
		this->range_attack_damage = 20;
		this->sql_injection_damage = 25;
		this->armor_damage_reduction = 5;
		std::cout << "<FR4G-TP> Directive one: Protect humanity! Directive two: \
Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs)
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
		std::cout << "<FR4G-TP> Directive one: Protect humanity! Directive two: \
Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int random;

	if(this->energy_p < 25)
	{
		std::cout << this->name << "I don't have enought energy" << std::endl;
		std::cout << "Energy points needed: " << 25 - this->energy_p \
			<< std::endl;
	}
	else
	{
		this->energy_p -= 25;
		srand(time(NULL));
		random = rand() % 5;
		if (random == 0)
			FragTrap::invisibleAttack(target);
		else if (random == 1)
			FragTrap::sqlInjectionAttack(target);
		else if (random == 2)
			FragTrap::smallAttack(target);
		else if (random == 3)
			FragTrap::meleeAttack(target);
		else
			FragTrap::rangedAttack(target);
  }
  return ;
}

FragTrap &FragTrap::operator = (FragTrap const &rhs)
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

FragTrap::~FragTrap()
{
	std::cout<<"FR4G-TP brrr I'm dead ["<<this->name<<"]"<< std::endl;
}
