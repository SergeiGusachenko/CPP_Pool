/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 12:42:37 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 13:01:23 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(const SuperMutant &rhs);
		SuperMutant	& operator=(SuperMutant const &rhs);
		SuperMutant();
		~SuperMutant();
		void	takeDamage(int);
};

#endif
