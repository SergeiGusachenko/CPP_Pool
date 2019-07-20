/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 23:23:23 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 01:19:38 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>
#include <string.h>

class Victim
{
	private:
	std::string name;
					Victim();
	public:
						Victim(std::string name);
						Victim(const Victim &rhs);
		Victim			& operator=(Victim const &rhs);
						~Victim();
		void			introduce();
		virtual void	getPolymorphed(void) const;
		std::string		getName() const;
};
std::ostream			&operator<< (std::ostream &out, const Victim &rhs);
#endif
