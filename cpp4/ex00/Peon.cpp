/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 10:40:56 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/10 11:03:39 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"


				Peon::Peon()
{
}
				Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog Zog." << std::endl;
}

void			Peon::getPolymorphed() const
{
	std::cout << getname() << " has been turned into a pink pony!" << std::endl;
}

				Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Peon &f)
{
	return o << "I am " << f.getname() <<" and I like otters!" << std::endl;
}
