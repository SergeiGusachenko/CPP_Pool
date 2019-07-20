/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 23:23:20 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 00:38:07 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout<<"Some random victim called "<< this->name<< " just popped !" << std::endl;
}

void	Victim::introduce()
{
	std::cout<< "I'm "<<this->name<<" and I like otters !"<<std::endl;
}

Victim::Victim(const Victim &rhs)
{
	this->name = rhs.name;
}

std::string	Victim::getName() const
{
	return this->name;
}

void	 Victim::getPolymorphed()const
{
	std::cout << this->name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream	&operator<< (std::ostream &out, const Victim &rhs)
{
	out << "I am " << rhs.getName() <<" and I like otters !" << std::endl;
	return (out);
}

Victim &Victim::operator= (const Victim  &rhs)
{
	if (this != &rhs)
		this->name = rhs.name;
	return (*this);
}

Victim::~Victim()
{
	std::cout<<"Victim "<< this->name<< " just died for no apparent reason !" << std::endl;
}
