/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:54:00 by sgusache          #+#    #+#             */
/*   Updated: 2019/07/18 17:11:31 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_p = 0;
}

Fixed::Fixed(const float a)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_p = roundf(a * (1 << 8));
}

Fixed::Fixed(const int a)
{
	this->fixed_p = a << 8;
	std::cout << "Int constructor called" << std::endl;
	return ;
}

float Fixed::toFloat(void) const
{
	return ((float)(this->fixed_p) / (1 << 8));
}

int Fixed::toInt(void) const
{
	return (int)(this->fixed_p >> 8);
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

int		Fixed::getRawBits( void ) const
{
	return (this->fixed_p);
}

void	Fixed::setRawBits( int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_p = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->fixed_p = rhs.getRawBits();
	std::cout << "Assignation operator called " << std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &val)
{
	out << val.toFloat();
	return (out);
}
