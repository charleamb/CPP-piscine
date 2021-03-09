/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:24 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/02 18:13:44 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

void	Fixed::setRawBits(int const raw)
{
	_fixep = raw;
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	std::cout << "Assignation operator called (overload)." << std::endl;
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
