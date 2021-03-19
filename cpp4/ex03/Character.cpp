/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/19 10:47:40 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

		Character::Character() : _name("unnamed"), _nbm(0)
{
	for (int i = 0; i < 4; i++)
		_bag[i] = NULL;
}
		Character::Character(std::string const name) : _name(name), _nbm(0)
{
	for (int i = 0; i < 4; i++)
		_bag[i] = NULL;
}
		Character::Character(const Character &to_copy)
{
	for (int i = 0; i < 4 && i < _nbm ; i++)
		{
			_bag[i] = to_copy._bag[i]->clone();
			delete to_copy._bag[i];
		}
		_nbm = to_copy._nbm;
		_name = to_copy._name;
}

Character	&Character::operator=(const Character &to_copy)
{
	if (this != &to_copy)
	{
		for (int i = 0; i < 4 && i < _nbm ; i++)
			delete _bag[i];
		for (int i = 0; i < 4 && i < to_copy._nbm ; i++)
		{
			_bag[i] = to_copy._bag[i]->clone();
			delete to_copy._bag[i];
		}
		_nbm = to_copy._nbm;
		_name = to_copy._name;
	}
	return *this;
}

std::string const	&Character::getName() const
{
	return _name;
}

AMateria const		&Character::getBag(int idx) const
{
	return *_bag[idx];
}

void				Character::equip(AMateria	*m)
{
	if (_nbm < 4)
	{
		_bag[_nbm] = m;
		_nbm++;
	}
}
void				Character::switche()
{
	if (_nbm >= 2)
		_bag[0] = _bag[1];
	if (_nbm >= 3)
		_bag[1] = _bag[2];
	if (_nbm == 4)
		_bag[2] = _bag[3];
}

void				Character::unequip(int idx)
{
	if ( idx >= 0 && idx < _nbm)
	{
		if (idx == 0)
			switche();
		else if (idx == 1)
		{
			if (_nbm >= 3)
				_bag[1] = _bag[2];
			if (_nbm == 4)
				_bag[2] = _bag[3];
		}
		else if (idx == 2)
			if (_nbm == 4)
				_bag[2] = _bag[3];
		_bag[_nbm - 1] = NULL;
		_nbm--;
	}
}
void				Character::use(int idx, ICharacter &target)
{
	if (idx < _nbm && idx >= 0)
		_bag[idx]->use(target);
}

			Character::~Character()
{
	for (int i = 0; i < 4 && i < _nbm ; i++)
	{
		if (_bag[i] != NULL)
			delete _bag[i];
	}


}
