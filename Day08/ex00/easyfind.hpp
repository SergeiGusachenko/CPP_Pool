/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:16:43 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/25 08:04:26 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <exception>

template <typename T>

int easyfind(T &obj, int i)
{
	typename T::iterator it = std::find(obj.begin(), obj.end(), i);

	if (it == obj.end())
		throw std::exception();

	return *it;
}

#endif
