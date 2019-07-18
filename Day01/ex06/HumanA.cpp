/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:17:00 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/17 14:43:46 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name , Weapon &weapon)
{
	this->weapon = &weapon;
	this->name = name;
}

HumanA::HumanA()
{
	Weapon *wep = new Weapon("default");
	this->weapon = wep;
	this->name = "";
}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << this->name + " attack with his weapon ";
	std::cout << this->weapon->getType() + " " << std::endl;
}
