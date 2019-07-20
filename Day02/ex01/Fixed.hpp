/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:54:04 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/18 17:04:26 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define  FIXED_HPP
#include <iostream>
#include <math.h>

class Fixed
{
	private:
		int fixed_p;
		static const int frac_p;
	public:
		Fixed();
		Fixed(const float a);
		Fixed(const int a);
		Fixed(Fixed const &fixed);
		~Fixed();
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed & operator=(Fixed const &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
	std::ostream &operator<<(std::ostream &out, Fixed const &val);
#endif
