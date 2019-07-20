/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:54:00 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/18 19:12:05 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_p = 0;
}

Fixed::Fixed(const float a)
{
	this->fixed_p = roundf(a * (1 << 8));
}

Fixed::Fixed(const int a)
{
	this->fixed_p = a << 8;
	return ;
}

float Fixed::toFloat(void) const
{
	return ((float)(this->fixed_p) / (1 << 8));
}

Fixed& operator++(Fixed& a)
{
	a.fixed_p++;
	return a;
}

Fixed& operator--(Fixed& a)
{
	a.fixed_p--;
	return a;
}

Fixed	operator++(Fixed& a, int)
{
	Fixed old(a);
	a.fixed_p++;
	return (old);
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	if(rhs.toFloat() != 0)
		return (Fixed(this->toFloat() / rhs.toFloat()));
	else
		std::cout << "N0O0O0O0O"<< std::endl;
	return *this;
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

Fixed &Fixed::max( Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::min( Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}


Fixed	operator--(Fixed& a, int)
{
	Fixed old(a);
	a.fixed_p--;
	return (old);
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return (this->fixed_p > rhs.fixed_p);
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return (this-> fixed_p < rhs.fixed_p);
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return (this->fixed_p >= rhs.fixed_p);
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return (this->fixed_p <= rhs.fixed_p);
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return (this->fixed_p == rhs.fixed_p);
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return (this->fixed_p != rhs.fixed_p);
}

int Fixed::toInt(void) const
{
	return (int)(this->fixed_p >> 8);
}

Fixed::Fixed(Fixed const &fixed)
{
	*this = fixed;
}

int		Fixed::getRawBits( void ) const
{
	return (this->fixed_p);
}

void	Fixed::setRawBits( int const raw)
{
	this->fixed_p = raw;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->fixed_p = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &val)
{
	out << val.toFloat();
	return (out);
}

Fixed::~Fixed()
{
}
