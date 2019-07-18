/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:53:40 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/17 16:15:20 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceString(std::string subject, const std::string& search, const std::string& replace)
{
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != std::string::npos)
	{
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return subject;
}

int main(int argc, char **argv)
{
	std::string line;
	std::string filename;
	std::string search;
	std::string replace;

	if (argc != 4)
	{
		std::cout <<" Usage: [filename] [s1] [s2]"<< std::endl;
		return 0;
	}
	std::ifstream in(argv[1]);
	filename = argv[1];
	filename.append(".replace");
	std::ofstream out(filename);
	if (in.is_open() && argv[2] && argv[3])
	{
		search = argv[2];
		replace = argv[3];
		while (std::getline(in, line))
		{
			line  = replaceString(line, search, replace);
			out << line << std::endl;
		}
	}
	else
		std::cout << "File is doesnt exist" << std::endl;
	in.close();
	return 0;
}
