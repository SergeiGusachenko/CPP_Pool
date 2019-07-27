/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:11:43 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/23 22:45:16 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cctype>
#include <climits>
#include <cfloat>
#include <math.h>

int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout<< "Usage [./convert] [string]"<< std::endl;
		return (0);
	}

	std::string s = argv[1];

	for (size_t i = 0; i < s.length(); i++)
		s.at(i) = std::tolower(s.at(i));

	bool isHex = (s.compare(0, 2, "0x") == 0);
	bool isInf = (s.compare(0, s.length(), "inf") == 0 ||
					s.compare(0, s.length(), "-inf") == 0 ||
					s.compare(0, s.length(), "+inf") == 0);
	bool isPoint = (s.find(".") != std::string::npos);
	bool isOctal = (!isHex && !isPoint && s.compare(0, 1, "0") == 0);

	if (!isHex && !isInf && s.at(s.length() - 1) == 'f')
		s = s.substr(0, s.length() - 1);

	long double d;
	if (s.length() == 3 && s.at(0) == '\'' && s.at(2) == '\'')
		d = static_cast<int>(s.at(1));
	else
	{
		std::istringstream ss(s);
		if (isOctal)
		{
			long octal;
			ss >> std::oct >> octal;
			d = octal;
		}
		else
			ss >> d;
	}
	if (isinf(d) || isnan(d) || d < CHAR_MIN || d > CHAR_MAX)
		std::cout << "char: Impossible" << std::endl;
	else if (std::isprint(static_cast<char>(d)))
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "char: Not displayable" << std::endl;

	if (isinf(d) || isnan(d) || d < INT_MIN || d > INT_MAX)
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	if (!(isinf(d) || isnan(d)) && (d < FLT_MIN || d > FLT_MAX))
		std::cout << "float: Impossible" << std::endl;
	else
		std::cout << "float: " << std::setprecision(1 ) << std::fixed
			<< static_cast<float>(d) << "f" << std::endl;

	if (!(isinf(d) || isnan(d)) && (d < DBL_MIN || d > DBL_MAX))
		std::cout << "double: Impossible" << std::endl;
	else
		std::cout << "double: " << std::setprecision(1) << std::fixed
			<< static_cast<double>(d) << std::endl;

}
