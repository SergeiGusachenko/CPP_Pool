/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 03:18:02 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/24 03:33:52 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

template <typename U>
void	swap(U  & x, U & y)
{
	U temp;
	temp = x;
	x = y;
	y = temp;
}

template <typename U>
U const		min(U const &x, U const &y) {return (x >= y) ? y : x ;}

template <typename U>
U const		max(U const &x, U const &y) {return (x >= y) ? x : y ;}

int main(void)
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << " , b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a , b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a , b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << " , d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c , d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c , d) << std::endl;
	return 0;
}

