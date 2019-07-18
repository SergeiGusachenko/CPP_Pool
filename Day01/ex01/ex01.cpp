/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:24:32 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/16 12:33:17 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string*		panthere = new std::string("String pathere");
	std::cout << *panthere<< std::endl;
	delete panthere;
}

int main()
{
	memoryLeak();
	while(1);
	return 0;
}
