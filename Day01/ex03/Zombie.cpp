/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 13:05:17 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/16 18:13:07 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout <<this->name + " is dead"<< std::endl;
}

void	Zombie::announce()
{
	std::cout<<this->name + " " + this->type + " Braiiiiiiinnnssss..."<< std::endl;
}

void	Zombie::setType(std::string type)
{
	this->type = type;
}

void	Zombie::setName()
{
	std::string names[6] = {"Ankle","Creepy","Crimson","Beaters","Dead", "Dead"};
	srand (time(NULL));
	int position = rand() % 5;
	this->name = names[position];
}
