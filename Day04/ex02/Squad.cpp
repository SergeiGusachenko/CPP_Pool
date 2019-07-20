/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:54:38 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 15:55:41 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"


Squad::Squad(void)
{
	this->nbr_units = 0;
	this->squad = NULL;
	return ;
}

Squad::Squad(const Squad &src)
{
	this->copyUnits(src);
	this->nbr_units = src.nbr_units;
	return ;
}

Squad::~Squad(void)
{
	this->destroyUnits();
	return ;
}

Squad	&Squad::operator= (const Squad &rhs)
{
	if (this != &rhs)
	{
		this->destroyUnits();
		this->copyUnits(rhs);
		this->nbr_units = rhs.nbr_units;
	}
	return (*this);
}

int	Squad::push(ISpaceMarine *marine)
{
	t_container  *tmp;

	tmp = this->squad;
	if (marine != NULL && this->unitAlreadyIn(marine, tmp) == false)
	{
		tmp = this->squad;
		if (this->squad != NULL)
		{
			while (tmp->next)
			{
				tmp = tmp->next;
			}
			tmp->next = new t_container;
			tmp->next->unit = marine;
			tmp->next->next = NULL;
		}
		else
		{
			this->squad = new t_container;
			this->squad->unit = marine;
			this->squad->next = NULL;
		}
		this->nbr_units += 1;
	}
	return (this->nbr_units);
}


int	Squad::getCount(void) const
{
	return (this->nbr_units);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	t_container  *tmp;

	tmp = this->squad;
	if (n < 0 || n >= this->nbr_units)
	{
		return (NULL);
	}
	while (n--)
	{
		tmp = tmp->next;
	}
	return (tmp->unit);
}

void Squad::copyUnits(const Squad &src)
{
	for (int i = 0; i < src.getCount(); i += 1)
	{
		push(src.getUnit(i));
	}
	return ;
}

void Squad::destroyUnits(void)
{
	t_container  *tmp;

	if (this->squad != NULL)
	{
		delete this->squad->unit;
		tmp = this->squad;
		this->squad = this->squad->next;
		delete tmp;
		return (this->destroyUnits());
	}
	return ;
}

bool	Squad::unitAlreadyIn(ISpaceMarine *marine, t_container *squad)
{
	if (squad == NULL)
	{
		return (false);
	}
	else if (marine == squad->unit)
	{
		return (true);
	}
	else
	{
		return (this->unitAlreadyIn(marine, squad->next));
	}
}
