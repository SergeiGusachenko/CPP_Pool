/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:02:53 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 11:08:59 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIRST_HPP
# define POWERFIRST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
			PowerFist();
			PowerFist(const PowerFist &rhs);
			virtual void  attack(void) const;
			PowerFist	& operator=(const PowerFist &rhs);
			virtual ~PowerFist();
};
#endif
