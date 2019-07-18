/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:18:51 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/17 14:11:10 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string& getType();
		void	setType(std::string type);
};
#endif
