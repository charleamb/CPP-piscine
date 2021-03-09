/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:03:38 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/05 07:57:47 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

std::ostream	&operator<<(std::ostream &o, const Fixed &f)
{
	return o << f.ToFloat();
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	_fixep = f.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed &f) const
{
	return (_fixep > f._fixep);
}

bool	Fixed::operator<(const Fixed &f) const
{
	return (_fixep < f._fixep);
}

bool	Fixed::operator>=(const Fixed &f) const
{
	return (_fixep >= f._fixep);
}

bool	Fixed::operator<=(const Fixed &f) const
{
	return (_fixep <= f._fixep);
}

bool	Fixed::operator==(const Fixed &f) const
{
	return (_fixep == f._fixep);
}

bool	Fixed::operator!=(const Fixed &f) const
{
	return (_fixep != f._fixep);
}


Fixed		Fixed::operator/(const Fixed &f) const
{
	return (ToFloat() / f.ToFloat());
}
Fixed		Fixed::operator*(const Fixed &f) const
{
	return (ToFloat() * f.ToFloat());
}
Fixed		Fixed::operator+(const Fixed &f) const
{
	return (ToFloat() + f.ToFloat());
}
Fixed		Fixed::operator-(const Fixed &f) const
{
	return (ToFloat() - f.ToFloat());
}

Fixed		&Fixed::operator++(void)
{
	_fixep++;
	return *this;
}
Fixed		Fixed::operator++(int)
{
	Fixed	tmp = *this;
	_fixep++;
	return tmp;
}

Fixed		&Fixed::operator--(void)
{
	_fixep--;
	return *this;
}
Fixed		Fixed::operator--(int)
{
	Fixed	tmp = *this;
	_fixep--;
	return tmp;
}
