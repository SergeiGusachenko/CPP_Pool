/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:54:00 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 15:55:41 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad: public ISquad
{
	private:
		int nbr_units;
		typedef struct			s_container
		{
			ISpaceMarine		*unit;
			struct s_container	*next;
		}						t_container;
		t_container				*squad;
		void copyUnits(const Squad &src);
		void destroyUnits(void);
		bool unitAlreadyIn(ISpaceMarine *marine, t_container *squad);
	public:
		virtual int				push(ISpaceMarine *marine);
		virtual int				getCount(void) const;
		virtual ISpaceMarine	*getUnit(int n) const;

		Squad();
		Squad(const Squad &rhs);
		Squad	& operator=(Squad const &rhs);
		~Squad();
};
#endif
