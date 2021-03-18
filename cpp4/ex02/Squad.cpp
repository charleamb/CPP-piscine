/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/18 09:02:46 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
				Squad::Squad()
{
	_count = 0;
	_lst_begin = NULL;
}
				Squad::Squad(Squad const &to_copy)
{
	_count = 0;
	_lst_begin = NULL;
	this->operator=(to_copy);
}

Squad &Squad::operator=(Squad const &to_copy)
{
	if (this != &to_copy)
	{
		_count = to_copy._count;
		t_conte			*tmp;
		ISpaceMarine	*copy;
		Squad			obj;
		obj = to_copy;
		for (int i = 0; i != _count; i++)
		{
			delete _lst_begin->ism;
			tmp =_lst_begin->next;
			delete _lst_begin;
			_lst_begin = tmp;
		}
		for (int j = 0; j != _count; j++)
		{
			copy = obj._lst_begin->ism->clone();
			push(copy);
			obj._lst_begin = obj._lst_begin->next;
		}
	}
	return *this;
}

int				Squad::getCount() const
{
	return _count;
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	t_conte *tmp;
	tmp = _lst_begin;
	for (int i = 0; i < n && tmp; i++)
		tmp = tmp->next;
	return tmp->ism;
}

int				Squad::push(ISpaceMarine* unit)
{
	t_conte *tmp;
	tmp = _lst_begin;
	if (!unit)
		return (-5);
	if (_lst_begin == NULL)
	{
		_lst_begin = new t_conte;
		_lst_begin->ism = unit;
		_lst_begin->unitnb = _count + 1;
		_lst_begin->next = NULL;
	}
	else
	{
		while (tmp->ism != unit && tmp->next != NULL)
			tmp = tmp->next;
		if (tmp->ism == unit)
			return (-7);
		tmp->next = new t_conte;
		tmp->next->ism = unit;
		tmp->next->unitnb = _count + 1;
		tmp->next->next = NULL;
	}
	_count++;
	return _count;
}

			Squad::~Squad()
{
	if (_lst_begin)
	{
		for (int i = 0; i < _count; i++)
		{
			delete _lst_begin->ism;
			_lst_begin = _lst_begin->next;
		}
		if (_lst_begin)
			delete _lst_begin->ism;
	}
}
