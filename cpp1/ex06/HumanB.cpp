/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:39:39 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/27 18:02:41 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"HumanB.hpp"

HumanB::HumanB(std::string	name)
{
	_name = name;
}

void	HumanB::setWeapon(Weapon &club)
{
	_weapon = &club;//new Weapon("Clubire");
}

std::string		HumanB::Getname()
{
	return	_name;
}

void	HumanB::attack()
{
	std::cout << _name << " : use " << _weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
//	delete _weapon;
	std::cout << _name <<" : DEAD" << std::endl;

}

