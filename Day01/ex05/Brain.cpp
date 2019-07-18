/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 18:37:22 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/17 09:27:47 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->weight = 100;
}

Brain::~Brain()
{

}

std::string	Brain::identify() const
{
	const Brain *a = this;
	std::stringstream ss;
	ss << a;
	std::string name = ss.str();
	return (name);
}
