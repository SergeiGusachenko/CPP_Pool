/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:02:31 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 18:52:41 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{

}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Ninja never dies [DESTRUCTOR]" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->name = name;
	this->hit_p = 60;
	this->max_p = 60;
	this->energy_p = 120;
	this->max_energy_p = 120;
	this->level = 1;
	this->melee_attack_damage = 60;
	this->range_attack_damage = 5;
	this->armor_damage_reduction = 0;
	this->invisible_attack_damage = 25;
	std::cout << "ClapTrap constructor !"<< std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &rhs)
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
		std::cout << " NNNNNINjAAAAAA Copy constructor "<< std::endl;
}

NinjaTrap &NinjaTrap::operator = (NinjaTrap const &rhs)
{
	std::cout << " NINJA OPERATOR = ["<<this->name<<" = "<< rhs.name <<" ]"<< std::endl;
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

void		NinjaTrap::ninjaShoebox(NinjaTrap &attack)
{
	std::cout <<"[NINJA DETECTED]Attack from "<< attack.name<<std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &attack)
{
	std::cout <<"[NINJA DETECTED]Attack from "<< attack.getName()<<std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap &attack)
{
	std::cout <<"[NINJA DETECTED]Attack from "<< attack.getName()<<std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &attack)
{
	std::cout <<"[NINJA DETECTED]Attack from "<< attack.getName()<<std::endl;
}
