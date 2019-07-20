/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 22:27:12 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/20 00:21:06 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include <string.h>
#include "Victim.hpp"
class Sorcerer
{
	private:
						Sorcerer();
						std::string	name;
						std::string	title;
	public:
						Sorcerer(std::string name, std::string title);
						Sorcerer(const Sorcerer &rhs);
						~Sorcerer();
		void			introduce();
		Sorcerer		& operator=(Sorcerer const &rhs);
		std::string		getName() const;
		std::string		getTitle() const;
		void			polymorph(Victim const &) const;
};

std::ostream			&operator<< (std::ostream &out, const Sorcerer &rhs);
#endif
