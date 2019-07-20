/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:32:17 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/15 21:18:04 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "phonebook.hpp"
#include "contact.hpp"

void get_command(Phonebook &phonebook)
{
	std::string command;

	std::cout << "Enter command: ";
    getline(std::cin, command);
	if (command == "EXIT")
		exit(0);
	else if(command ==  "ADD")
		phonebook.addContact();
	else if(command ==  "SEARCH")
		phonebook.displayContacts();
}

int main()
{
	Phonebook phonebook;
	std::cout << "Hi ! it's Awesome Phone Book" << std::endl;
	std::cout << "You can use this commands to manage your contacts :" << std::endl;
	std::cout << "EXIT" << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	while(true)
		get_command(phonebook);
	return 0;
}
