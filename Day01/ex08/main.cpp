/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 17:33:26 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/17 18:30:15 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	std::string answer;
	std::string action_n;
	std::string target;
	answer = "no";
	std::cout <<" ________Usage: [type of attack] [target]________" << std::endl;
	std::cout << "____attack types : ____\n____[meleeAttack]____\n ____[rangedAttack]____\n ____[intimidatingShout]____" << std::endl;
	std::cout << "\nWould you like to attack ? [yes/no]" << std::endl;
	std::cin >> answer;
	while(answer == "yes")
	{
		std::cout <<"Please enter type of attack :" << std::endl;
		std::cin >> action_n;
		std::cout <<"\n Name of target:";
		std::cin >> target;
		Human human = Human();
		std::cout << "\n\n\n\n" << std::endl;
		human.action(action_n, target);
		std::cout << "\nWould you like to attack again ? [yes/no]" << std::endl;
		std::cin >> answer;
	}
		std::cout << "Bye !" << std::endl;

	return 0;
}
