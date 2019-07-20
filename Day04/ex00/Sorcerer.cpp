/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 22:29:38 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 00:40:44 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout<<this->name<< " ," <<this->title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &rhs)
{
	this->name = rhs.name;
	this->title = rhs.title;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << " ," << this->title << ", is dead. Consequences will never be the same !" <<std::endl;
}

Sorcerer &Sorcerer::operator= (const Sorcerer  &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->title = rhs.title;
	}
	return (*this);
}

void	Sorcerer::polymorph(Victim const& vic) const
{
	return (vic.getPolymorphed());
}

std::ostream	&operator<< (std::ostream &out, const Sorcerer &rhs)
{
	out << "I am " << rhs.getName() << ", " << rhs.getTitle() \
		<< ", and I like ponies ! " << std::endl;
	return (out);
}

std::string		Sorcerer::getName() const
{
	return this->name;
}

std::string		Sorcerer::getTitle() const
{
	return this->title;
}


void	Sorcerer::introduce()
{
	std::cout<< "I am " << this->name << " ," << this->title << ", and I like ponies !" << std::endl;
}
