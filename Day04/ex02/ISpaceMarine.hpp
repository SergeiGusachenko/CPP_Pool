/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 15:49:23 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 15:58:26 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP
#include <iostream>
#include <string.h>
class ISpaceMarine
{
	public:
	virtual					~ISpaceMarine(void) { return ; }
	virtual void			battleCry(void) const = 0;
	virtual void			meleeAttack(void) const = 0;
	virtual void			rangedAttack(void) const = 0;
	virtual ISpaceMarine	*clone(void) const = 0;
};
#endif
