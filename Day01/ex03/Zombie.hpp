/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:59:12 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/16 18:03:55 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie
{
	private:
		std::string type;
		std::string name;
	public:
		Zombie(std::string name, std::string type = "default");
		Zombie(void);
		~Zombie();
		void	announce();
		void	randomChump();
		void	setType(std::string type);
		void	setName();
};
#endif
