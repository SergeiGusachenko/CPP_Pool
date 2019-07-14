/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:51:54 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/13 17:17:21 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_msg(char *str)
{
	int i = 0;
	char c;

	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			c = str[i] - 32;
		else
			c = str[i];
		std::cout<<c;
		i++;
	}
	std::cout<<std::endl;
}

int main(int argc, char **argv)
{
	int i = 0;

	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(argv[++i])
		print_msg(argv[i]);

	return (0);
}
