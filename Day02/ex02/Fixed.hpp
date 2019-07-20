/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:54:04 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/18 19:09:16 by sgusache         ###   ########.fr       */
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
		static const int frac_p = 8;
	public:
		Fixed();
		Fixed(const float a);
		Fixed(const int a);
		Fixed(Fixed const &fixed);
		~Fixed();
		float				toFloat(void) const;
		int					toInt(void) const;
		Fixed &				operator=(Fixed const &rhs);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		static Fixed		&min(Fixed &a, Fixed &b);
		const static Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		const static Fixed	&max(const Fixed &a, const Fixed &b);
		friend Fixed&		operator ++ (Fixed& a);
		friend Fixed		operator ++ (Fixed& a, int);
		friend Fixed		operator -- (Fixed& a, int);
		friend Fixed&		operator -- (Fixed& a);
		Fixed				operator * (const Fixed &rhs) const;
		Fixed				operator / (const Fixed &rhs) const;
		bool				operator > (const Fixed &rhs) const;
		bool				operator < (const Fixed &rhs) const;
		bool				operator <= (const Fixed &rhs) const;
		bool				operator >= (const Fixed &rhs) const;
		bool				operator == (const Fixed &rhs) const;
		bool				operator != (const Fixed &rhs) const;
};
	std::ostream &operator<<(std::ostream &out, Fixed const &val);
#endif
