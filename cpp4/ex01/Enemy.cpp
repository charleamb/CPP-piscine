/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 16:42:56 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

		Enemy::Enemy()
{
}

		Enemy::Enemy(int hp, std::string const &type)
{
	_type = type;
	_hp = hp;
}
		Enemy::Enemy(const Enemy &e)
{
	_hp = e.getHP();
	_type = e.getType();
}
Enemy	&Enemy::operator=(const Enemy &e)
{
	_hp = e._hp;
	_type = e._type;
	return *this;
}

void		Enemy::takeDamage(int dmg)
{
	if ( getHP() <= 0)
		std::cout << "<" << getType() << "> already dead !"<< std::endl;
	else if ( getHP() > dmg)
	{
		std::cout << "<" << getType() << "> TakeDamage <" << dmg << ">" << std::endl;
		setHP(getHP() - dmg);
	}
	else if ( getHP() < dmg)
	{
		std::cout << "<" << getType() << "> TakeDamage <" << dmg << ">" << std::endl;
		setHP(0);
		delete this;
	}
}
std::string	Enemy::getType() const
{
	return _type;
}
void		Enemy::setHP(int hp)
{
	_hp = hp;
}

int			Enemy::getHP() const
{
	return _hp;
}

			Enemy::~Enemy()
{
}
