/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:05:07 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 13:50:36 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string.h>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	protected:
		std::string		name;
		int				ap;
		AWeapon			*weapon;

	public:
					Character();
					Character(const Character &rhs);
					Character(std::string const & name);
		Character	&operator=(Character const &rhs);
					~Character();
		void		recoverAP();
		void		equip(AWeapon*);
		void		attack(Enemy*);
		std::string getName() const;
		AWeapon		*getWeapon() const;
		int			getAp() const;
};
std::ostream &operator<< (std::ostream &out, const Character &rhs);
#endif
