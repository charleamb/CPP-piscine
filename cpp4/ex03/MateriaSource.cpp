/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/19 10:01:54 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

				MateriaSource::MateriaSource() : _nbsm(0)
{
	for (int i = 0; i < 4; i++)
		_slot[i] = NULL;
}
				MateriaSource::MateriaSource(const MateriaSource &to_copy)
{
	_nbsm = to_copy._nbsm;
	for (int i = 0; i < 4 && i < _nbsm ; i++)
	{
		_slot[i] = to_copy._slot[i]->clone();
		delete to_copy._slot[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &to_copy)
{
	if (this != &to_copy)
	{
		for (int i = 0; i < 4 && i < _nbsm ; i++)
			delete _slot[i];
		_nbsm = to_copy._nbsm;
		for (int i = 0; i < 4 && i < _nbsm ; i++)
		{
			_slot[i] = to_copy._slot[i]->clone();
			delete to_copy._slot[i];
		}
	}
	return *this;
}

void			MateriaSource::learnMateria(AMateria	*m)
{
	if (m != NULL && _nbsm < 4)
	{
		_slot[_nbsm] = m;
		_nbsm++;
	}
}

AMateria		*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < _nbsm; i++)
	{
		if (_slot[i]->getType().compare(type) == 0)
			return _slot[i]->clone();
	}
	return 0;
}
				MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4 && i < _nbsm ; i++)
	{
		if (_slot[i] != NULL)
			delete _slot[i];
	}
}
