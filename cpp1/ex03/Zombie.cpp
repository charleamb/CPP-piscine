/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:39:39 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/23 20:41:42 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"Zombie.hpp"

Zombie::Zombie()
{
}
void	Zombie::talk()
{
	std::cout << "<" << _name << "(" << _type << ") > gnnn le seellll .. sel ...se l .." << std::endl;
}

std::string		Zombie::Getname()
{
	return	_name;
}

std::string		Zombie::Gettype()
{
	return	_type;
}
Zombie::Zombie(std::string name, std::string type)
{

	_name = name;
	_type = type;
	std::cout << "creation de  horde loading" << std::endl;
}

Zombie::~Zombie()
{
	if (_type.compare("rageux") == 0)
		std::cout << _name << ": GG EZ AFK TEAM" << std::endl;
	else
		std::cout << _name << ":Disconect" << std::endl;
}

