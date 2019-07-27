/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:19:50 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/24 19:45:04 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <exception>
#include <iostream>
#include <set>
#include <list>

int main(void)
{
	std::list<int> l;
	for (int i = 1; i <= 10; i++)
		l.push_back(i);
	for (int i = -10; i <= 20; i++)
	{
		try
		{
			std::cout << easyfind(l, i) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "can't find second parametr " << i << std::endl;
		}
	}
	return (0);
}
