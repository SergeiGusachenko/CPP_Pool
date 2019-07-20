/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 10:24:58 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 13:42:08 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
#include <iostream>
#include <string.h>
class AWeapon
{
	protected:
		std::string name;
		int damage;
		int apcost;
	public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &rhs);
	AWeapon	& operator=(AWeapon const &rhs);
	~AWeapon();
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	void virtual attack() const = 0;
};
#endif
