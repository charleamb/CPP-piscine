/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:35:09 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/11 17:05:17 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Aweapon.hpp"

			AWeapon::AWeapon()
{
}

			AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	_name = name;
	_apcost = apcost;
	_dmg = damage;
	std::cout << "Weapon : " << _name << " created" << std::endl;
}

std::string	AWeapon::getName() const
{
	return _name;
}

int			AWeapon::getApcost() const
{
	return _apcost;
}

int			AWeapon::getDmg() const
{
	return _dmg;
}

			AWeapon::~AWeapon()
{
	std::cout << _name << " broken" << std::endl;
}
