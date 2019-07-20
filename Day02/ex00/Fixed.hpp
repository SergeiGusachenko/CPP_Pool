/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:54:04 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/19 08:51:00 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define  FIXED_HPP
#include <iostream>
class Fixed
{
	private:
		int fixed_p;
		static const int frac_p;
	public:
		Fixed();
		Fixed(Fixed const &fixed);
		~Fixed();
		Fixed & operator=(Fixed const &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
#endif
