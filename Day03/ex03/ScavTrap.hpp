/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 10:54:12 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 18:39:48 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"
class	ScavTrap : public ClapTrap
{
	public:
						ScavTrap();
						ScavTrap(std::string name);
						ScavTrap(const ScavTrap &rhs);
						~ScavTrap();
	ScavTrap 			& operator=(ScavTrap const &rhs);
	void				challengeNewcomer(std::string const & target);
};
#endif
