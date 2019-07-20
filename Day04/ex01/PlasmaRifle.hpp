/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 10:42:53 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 14:00:30 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &rhs);
		virtual void  attack(void) const;
		PlasmaRifle	& operator=(const PlasmaRifle &rhs);
		virtual ~PlasmaRifle();
};
#endif
