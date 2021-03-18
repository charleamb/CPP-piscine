/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 10:40:56 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/10 10:55:20 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"


				Victim::Victim()
{
	_name = "unnamed";
	std::cout << "Some random victim called " << _name << " just appeared!" <<std::endl;
}
				Victim::Victim(std::string name)
{
	_name = name;
	std::cout << "Some random victim called " << _name << " just appeared!" <<std::endl;
}
	
				Victim::Victim(const Victim	&f)
{
	std::cout << "Copy constructor called" << std::endl;
	_name = f._name;
}

std::string		Victim::getname() const
{
	return _name;
}

void			Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

				Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Victim &f)
{
	return o << "I am " << f.getname() <<" and I like otters!" << std::endl;
}
