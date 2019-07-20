/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 12:56:15 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 13:04:22 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REDSCORPION_HPP
# define REDSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
		/* data */
	public:
		RadScorpion(const RadScorpion &rhs);
		RadScorpion	& operator=(RadScorpion const &rhs);
		RadScorpion();
		void	takeDamage(int);
		~RadScorpion();
};
#endif
