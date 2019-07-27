/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 03:37:06 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/24 03:57:59 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

template<typename U>
void print(U &x) {std::cout << x << std::endl;}


template<typename U>
inline void	iter(U (*array), size_t lengh, void (*f)(U const &))
{
	for (size_t i = 0; i < lengh; i++)
		f(array[i]);
}

int main(void)
{
	float arr[7]= {1.4353, 2.123, 3.23415 ,4.2345 , 5.345 ,6.2346 ,7.236};
	iter(arr, 7, print);
	return 0;
}

