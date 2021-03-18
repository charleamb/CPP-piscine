/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 10:40:56 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/10 10:35:40 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"


		Sorcerer::Sorcerer()
{
	std::cout << "unnamed, " << _title << ", is Born!" <<std::endl;
	_name = "unnamed";
	_title = "untitled";
}
		Sorcerer::Sorcerer(std::string name, std::string title)
{
	_title = title;
	_name = name;
	std::cout << _name << ", " << _title << ", is Born!" <<std::endl;
}
	
	Sorcerer::Sorcerer(const Sorcerer	&f)
{
	std::cout << "Copy constructor called" << std::endl;
	_name = f._name;
	_title = f._title;
}

std::string		Sorcerer::getname()
{
	return _name;
}

std::string		Sorcerer::gettitle()
{
	return _title;
}
void			Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title <<
	", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer &f)
{
	return o << "I am " << f.getname() << ", " << f.gettitle() << ", and I like ponies!" << std::endl;
}
