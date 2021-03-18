/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/17 18:03:06 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

		AssaultTerminator::AssaultTerminator()
{
	std::cout << "Teleports from space *" << std::endl;
}

		AssaultTerminator::AssaultTerminator(const AssaultTerminator &e)
{
	(void)e;
	std::cout << "Teleports from space *" << std::endl;
}
AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &e)
{
	(void)e;
	std::cout << "Teleports from space *" << std::endl;
	return *this;
}

ISpaceMarine	*AssaultTerminator::clone() const
{
	return new AssaultTerminator(*this);
}

void		AssaultTerminator::battleCry() const
{
	std::cout <<  "This code is unclean. PURIFY IT!" << std::endl;
}

void		AssaultTerminator::rangedAttack() const
{
	std::cout <<  "* does nothing *" << std::endl;
}

void		AssaultTerminator::meleeAttack() const
{
	std::cout <<  "* attacks with a chainfist *" << std::endl;
}

			AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}
