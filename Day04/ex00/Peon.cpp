/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 23:58:12 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 00:41:24 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(const Peon &rhs): Victim(rhs)
{
	std::cout << "Zog zog." << std::endl;
}

Peon		& Peon::operator = (Peon const &rhs)
{
	if (this != &rhs)
		this->name = rhs.name;
	return (*this);
}

Peon::~Peon()
{
	std::cout<<"Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
	std::cout<< getName() << " has been turned into a pink pony !"<< std::endl;
	return;
}
