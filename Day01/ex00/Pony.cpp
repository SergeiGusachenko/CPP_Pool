/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:37:23 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/16 12:21:01 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int age)
{
	this->age = age;
	this->name = name;
	std::cout << "Hi I am " + name << std:: endl;
}

Pony::~Pony()
{
	std::cout << this->getName() + " is die" << std::endl;
}

void		Pony::printAge()
{
	std::cout << this->age << std::endl;
}

void		Pony::growUp()
{
	this->age++;
}

std::string Pony::getName()
{
	return (this->name);
}

