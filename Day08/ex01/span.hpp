/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:46:29 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/25 08:44:39 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <vector>
class Span
{
	private:
	std::vector<int> _v;
	unsigned int _arrSize;
		Span();
	public:
		Span(unsigned int num);
		void addNumber(int);
		Span(Span const &obj);
		Span const &operator=(Span const &obj);
		unsigned int shortestSpan();
		long longestSpan();
		~Span();
};

#endif
