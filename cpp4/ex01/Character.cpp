/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 10:50:42 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

		Character::Character()
{
}
		Character::Character(std::string const &name)
{
	_name = name;
	_Ap = 40;
}

void		Character::attack(Enemy	*target)
{
	if(!_weap)
	{
		std::cout << "No weapon fuck it, Runnnnnn" << std::endl;
		return ;
	}
	if (_Ap >= _weap->getApcost())
	{
		std::cout << _name << " attack " << target->getType() << " with a " <<
		_weap->getName() << " !!!" << std::endl;
		_Ap = _Ap - _weap->getApcost();
		_weap->attack();
		target->takeDamage(_weap->getDmg());
	//	target->getHP() == 0;
	//	delete target;
	}
	else
		std::cout << "Not enought AP, Recover fast needed" << std::endl;
}
void		Character::equip(AWeapon *weap)
{
	_weap = weap;
}
int			Character::getAP() const
{
	return _Ap;
}

AWeapon		*Character::getWeapon()
{
	return _weap;
}

std::string	Character::getName() const
{
	return _name;
}
void		Character::recoverAP()
{
	if ( _Ap <= 30)
		_Ap = _Ap + 10;
	else
		_Ap = 40;
}

std::ostream &operator << (std::ostream &out,  Character &c)
{
	if (c.getWeapon() != NULL)
		return out << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << "." << std::endl;
	return out << c.getName() << " has " << c.getAP() << " AP and is unarmed." << std::endl;
}
Character::~Character()
{
}
