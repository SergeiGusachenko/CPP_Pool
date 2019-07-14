/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:40:02 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/13 20:50:24 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	int i = 1;
	Contact contact[8];
	std::cout << "Hi ! it's Awesome Phone Book" << std::endl;
	std::cout << "You can use this commands to manage your contacts :" << std::endl;
	std::cout << "EXIT - quits programm and the contacts lost forever." << std::endl;
	std::cout << "ADD - new contact [first name, last name, nickname, login, postal address, email address, phone number, birthday date, favorite meal, underwear color, darkest secret]" << std::endl;
	std::cout << "SEARCH" << std::endl;
	while(i)
	{
		if (std::cin.eof())
		{
			std::cout << "CTRL + D pressed, bye :)" << std::endl;
			return (0);
		}

	}
}
