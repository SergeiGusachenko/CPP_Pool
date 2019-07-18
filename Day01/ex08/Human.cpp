/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 17:33:16 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/17 18:26:28 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout<< "___________________________________"<<std::endl;
	std::cout<< "Melee Attack to " + target <<std::endl;
	std::cout<< "___________________________________"<<std::endl;

}

void Human::rangedAttack(std::string const & target)
{
	std::cout<< "___________________________________"<<std::endl;
	std::cout<< "Ranged Attack to " + target <<std::endl;
	std::cout<< "___________________________________"<<std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout<< "___________________________________"<<std::endl;
	std::cout<< "Intimidating Shout to " + target <<std::endl;
	std::cout<< "___________________________________"<<std::endl;


}

void	Human::action(std::string const & action_name, std::string const & target)
{
	int i = 0;

	void (Human::*ptr[])(std::string const &) =
	{
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

	std::string commands[] =
	{
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};

	while (i < 3)
	{
		if (commands[i] == action_name)
		{
			(this->*ptr[i])(target);
			i = 4;
		}
		i++;
	}
	return;
}
