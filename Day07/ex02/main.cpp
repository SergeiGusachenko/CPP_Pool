/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 04:34:28 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/24 04:47:10 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> a(20);

	std::cout << "A -> ";
	for (size_t i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	Array<int> b(20);
	b = a;
	for (size_t i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";

	// call a exception
	for (size_t i = 0; i <= b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
}
