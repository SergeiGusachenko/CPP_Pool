/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:03:19 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 18:46:34 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
#include <iostream>
#include <string.h>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &rhs);
		NinjaTrap			& operator=(NinjaTrap const &rhs);
		~NinjaTrap();
		void 		ninjaShoebox(NinjaTrap &attack);
		void 		ninjaShoebox(ClapTrap &attack);
		void 		ninjaShoebox(FragTrap &attack);
		void 		ninjaShoebox(ScavTrap &attack);
};
#endif
