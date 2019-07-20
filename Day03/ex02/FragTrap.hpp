/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 23:30:02 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 17:34:46 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP
#include <string.h>
#include <iostream>
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
	public:
		void	vaulthunter_dot_exe(std::string const & target);
							FragTrap();
							FragTrap(FragTrap const &rhs);
							FragTrap(std::string name);
							~FragTrap();
		FragTrap 			& operator=(FragTrap const &rhs);
};
#endif
