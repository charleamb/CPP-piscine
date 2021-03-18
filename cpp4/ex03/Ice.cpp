/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/18 10:42:14 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

		Ice::Ice() : AMateria("ice")
{
}

		Ice::Ice(const Ice &a): AMateria("ice")
{
	getXp() = a.getXp();
}

Ice	&Ice::operator=(const Ice &to_copy)
{
	getXp() = to_copy.getXp();
	return *this;
}

Ice					*Ice::clone() const
{
	return new Ice(*this);
}

void				Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
	AMateria::use(target);
}

			Ice::~Ice()
{
}
