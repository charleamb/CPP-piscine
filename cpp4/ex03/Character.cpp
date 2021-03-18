/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/18 12:01:35 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

		Character::Character() : _name("unnamed"), _nbm(0)
{
	for (int i = 0; i < 4; i++;)
		_bag[i] = NULL;
}
		Character::Character(std::string const name) : _name(name), _nbm(0)
{
	for (int i = 0; i < 4; i++;)
		_bag[i] = NULL;
}
		Character::Character(const Character &to_copy)
{
	for (int i = 0; i < 4 && i < _nbm ; i++;)
		{
			_bag[i] = to_copy._bag[i].clone();
			delete to_copy._bag[i];
		}
		_nbm = to_copy._nbm;
		_name = to_copy._name;
}

Character	&Character::operator=(const Character &to_copy)
{
	if (this != &to_copy)
	{
		for (int i = 0; i < 4 && i < _nbm ; i++;)
			delete _bag[i];
		for (int i = 0; i < 4 && i < to_copy._nbm ; i++;)
		{
			_bag[i] = to_copy._bag[i].clone();
			delete to_copy._bag[i];
		}
		_nbm = to_copy._nbm;
		_name = to_copy._name;
	}
	return *this;
}

std::string const	Character::getNAme() const
{
	return _name;
}

void				Character::use(int idx, ICharacter &target)
{
	_bag[idx]::use(target);
}

			Character::~Character()
{
	std::cout << "DEAD :" << _name << std::endl;
}
