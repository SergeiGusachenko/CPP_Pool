/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 08:50:01 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/17 09:32:18 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_HPP
#define HUMAN_HPP
#include <iostream>
#include "Brain.hpp"
class Human
{
	private:
	Brain brain;
	public:
		Human();
		~Human();
		std::string identify() const;
		Brain getBrain();

};
#endif
