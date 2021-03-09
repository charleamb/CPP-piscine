/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:24 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/03 17:27:13 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


		Fixed::Fixed()
{
	_fixep = 0;
	std::cout << "Default constructor called" << std::endl;
}

		Fixed::Fixed(const Fixed	&f)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixep = f._fixep;
}

		Fixed::Fixed(const int	f)
{
	_fixep = f << _bit;// y << x -> deplace la valeur y de x fois vers la gauche}
}
		Fixed::Fixed(const float	f)
{
	_fixep = roundf(f * (1 << _bit)); //256);
}

float	Fixed::ToFloat(void) const
{
	return (float)_fixep / 256;
}

int		Fixed::ToInt(void) const
{
	return _fixep >> _bit;
}
void	Fixed::setRawBits(int const raw)
{
	_fixep = raw;
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	_fixep = f.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called" << std::endl;
	return _fixep;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, const Fixed &f)
{
	return o << f.ToFloat();
}
