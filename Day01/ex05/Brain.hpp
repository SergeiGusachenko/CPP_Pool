/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 18:25:39 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/17 10:15:24 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
# include <sstream>

class Brain
{
		private:
			int weight;
		public:
			Brain();
			~Brain();
			std::string identify() const;
};
#endif
