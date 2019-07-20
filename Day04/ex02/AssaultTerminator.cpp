/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 16:01:05 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 16:02:42 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src)
{
	*this = src;
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back ..." << std::endl;
	return ;
}

AssaultTerminator &AssaultTerminator::operator= (const AssaultTerminator &rhs)
{
	(void)rhs;
	return (*this);
}

void AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
	return ;
}

void AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return ;
}

void AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

ISpaceMarine *AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator);
}
