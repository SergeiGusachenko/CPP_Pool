/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:46:24 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/25 08:51:59 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(){}

Span::Span(unsigned int num)
{
	this->_arrSize = num;
	_v.reserve(num);
}

void	Span::addNumber(int n)
{
	if(_v.size() + 1 > this->_arrSize)
		throw std::exception();
	else
	{
		_v.push_back(n);
		this->_arrSize++;
	}
}

Span::Span(Span const &obj)
{
	*this = obj;
}

Span const &Span::operator=(Span const &obj)
{
	if (this->_v == obj._v)
		return *this;
	this->_v = obj._v;
	this->_arrSize = obj._arrSize;
	return *this;
}

unsigned int Span::shortestSpan()
{
	if(_v.size() <= 1)
		throw std::exception();
	else
	{
	std::vector<int>		copy = _v;
	std::sort(copy.begin(), copy.end());
	std::vector<int>::iterator it  = copy.begin();
	std::vector<int>::iterator one = copy.begin();
	std::vector<int>::iterator two = copy.end();
	it++;
	two--;
	unsigned int i = 0;
	while (i < (_arrSize - 1))
	{
		if (abs(*one - *it) < abs(*one - *two))
			two = it;
		else if (abs(*two - *it) < abs(*one - *two))
			one = it;
		i++;
		it++;
	}
	return (abs(*one - *two));
	}

}

long Span::longestSpan()
{
	if(_v.size() <= 1)
		throw std::exception();
	{
		return(static_cast<long>(*std::max_element(this->_v.begin(), this->_v.end())) -
		static_cast<long>(*std::min_element(this->_v.begin(), this->_v.end())));
	}
}

Span::~Span()
{
	std::vector<int>().swap(this->_v);
}
