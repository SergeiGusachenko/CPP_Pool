/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:39:52 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/16 12:32:47 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
#include <iostream>

class Pony
{
	private:
		std::string		name;
		int				age;

	public:
		Pony(std::string name, int age);
		~Pony();
		void		firstWord(std::string msg);
		void		printAge();
		void		growUp();
		std::string getName();
};
#endif
