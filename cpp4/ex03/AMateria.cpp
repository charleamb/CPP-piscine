/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/19 10:03:47 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

		AMateria::AMateria() : _xp(0), _type("unnamed")
{
}
		AMateria::AMateria(std::string const &type) : _xp(0), _type(type)
{
}
		AMateria::AMateria(const AMateria &a)
{
	*this = a;
}
AMateria	&AMateria::operator=(const AMateria &to_copy)
{
	_xp = to_copy._xp;
	return *this;
}

std::string const	&AMateria::getType() const
{
	return _type;
}

unsigned int		AMateria::getXP() const
{
	return _xp;
}

void				AMateria::setXP(int xp)
{
	_xp = xp;
}

void				AMateria::use(ICharacter &target)
{
	(void)target;
	_xp = _xp + 10;
}

			AMateria::~AMateria()
{
//	std::cout << "break :" << _type << ", xp : "<< _xp << std::endl;
}
