/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 18:14:20 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/16 18:19:59 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPoint = &str;
	std::string &strRef = str;

	std::cout << *strPoint << std::endl;
	std::cout << strRef << std::endl;
}
