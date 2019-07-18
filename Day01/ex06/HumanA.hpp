/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:17:52 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/17 14:42:57 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define  HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
	Weapon *weapon;
	std::string name;
	public:
		HumanA();
		HumanA(std::string name , Weapon &weapon);
		~HumanA();
		void attack();
};
#endif
