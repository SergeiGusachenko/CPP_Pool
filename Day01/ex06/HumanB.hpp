/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:55:01 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/17 14:46:09 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define  HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
	Weapon *weapon;
	std::string name;
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void attack();
};
#endif
