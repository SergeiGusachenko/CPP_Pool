/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:25:01 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/17 09:32:33 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

std::string	Human::identify() const
{
	return (this->brain.identify());
}

Brain Human::getBrain()
{
	return (this->brain);
}
