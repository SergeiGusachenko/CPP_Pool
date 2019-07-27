/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 09:29:30 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/25 10:15:47 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iostream>
# include <string.h>
template <typename T>

class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void): std::stack<T>() {}
		virtual ~MutantStack(void) {}
		MutantStack(std::stack<T> const &obj): std::stack<T>(obj) {}
		MutantStack(MutantStack const &obj): std::stack<T>(obj) {}
		using std::stack<T>::operator=;
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void) { return std::begin(std::stack<T>::c); }
		iterator end(void) { return std::end(std::stack<T>::c);}
};
#endif
