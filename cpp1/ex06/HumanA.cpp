/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:39:39 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/24 20:11:18 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"HumanA.hpp"

HumanA::HumanA(std::string	name, Weapon type)
{
	_name = name;
	_weapon = &type;//new Weapon("Clubire");
}

std::string		HumanA::Getname()
{
	return	_name;
}

void	HumanA::attack()
{
	std::cout << _name << " : use " << _weapon->getType() << std::endl;
}

HumanA::~HumanA()
{
//	delete _weapon;
	std::cout << _name << " : DEAD" << std::endl;
}

