/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:29:39 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/16 18:14:15 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n)
{
	Zombie *zombie = new Zombie[n];

	for(int i = 0; i < n; i++)
	{
		zombie[i].setName();
		zombie[i].setType("default");
		zombie[i].announce();
	}
	delete [] zombie;
}
