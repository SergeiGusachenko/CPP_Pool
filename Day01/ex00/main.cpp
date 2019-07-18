/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:38:07 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/17 14:36:14 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(std::string name, int age)
{
	Pony *Dani = new Pony(name, age);
	Dani->printAge();
	delete Dani;
}

void	ponyOnTheStack(std::string name, int age)
{
	Pony Dani = Pony(name, age);
	Dani.printAge();
}

int		main()
{
	std::string name;
	int		age;
	std::cout << "Please enter the name of pony (HEAP)" << std::endl;
	std::cin >> name;
	std::cout << "Please enter pony age" << std::endl;
	std::cin >> age;
	ponyOnTheHeap(name, age);
	std::cout << "Please enter the name of pony (STACK) " << std::endl;
	std::cin >> name;
	std::cout << "Please enter pony age" << std::endl;
	std::cin >> age;
	ponyOnTheStack(name, age);
}
