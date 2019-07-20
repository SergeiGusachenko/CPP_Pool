/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 23:58:25 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 00:53:44 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"
#include <iostream>
#include <string.h>

class Peon:public Victim
{
	private:
					std::string name;
					Peon();
	public:
					Peon(std::string name);
					Peon(const Peon &rhs);
		Peon		& operator=(Peon const &rhs);
		void		getPolymorphed(void) const;
					~Peon();
};

#endif
