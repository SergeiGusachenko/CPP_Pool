/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 04:14:40 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/24 04:44:40 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
#include <string.h>
template <typename T>
class Array
{
	private:
	T	*_array;
	size_t _size;
	public:
		Array(): _array(NULL), _size(0){};
		Array(unsigned int n) : _array(new T[n]), _size(n){};
		~Array()
		{
			if(this->_array != NULL)
				delete [] _array;
		}
		Array const &operator=(Array const &rhs)
		{
			if (&rhs == this)
				return *this;

			if (this->size() != rhs.size())
			{
				if (this->_array != NULL)
					delete [] this->_array;
				this->_array = new T[rhs.size()];
			}
			this->_size = rhs.size();
			for (size_t i = 0; i < rhs.size(); i++)
				this->_array[i] = rhs._array[i];
			return *this;
		}

		T &operator[](size_t i) const
		{
			if (!this->_array || i < 0 || i >= this->_size)
				throw std::exception();
			return this->_array[i];
		}
		unsigned int size(void) const
		{
			return this->_size;
		}
};
#endif
