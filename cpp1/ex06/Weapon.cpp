/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:39:39 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/26 09:15:58 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Weapon.hpp"
#include	<cstring>

Weapon::Weapon(std::string	type)
{
	_type =/*	"        " + */type;
}

void	Weapon::setType(std::string	type)
{
	_type =/*	"       " + */type;
}

std::string	Weapon::getType()
{
	return _type;
}

Weapon::~Weapon()
{
	std::cout << "broken" << std::endl;
}
