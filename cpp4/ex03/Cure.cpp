/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/19 10:27:53 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

		Cure::Cure() : AMateria("cure")
{
}

		Cure::Cure(const Cure &a): AMateria("cure")
{
	setXP(a.getXP());
}

Cure	&Cure::operator=(const Cure &to_copy)
{
	setXP(to_copy.getXP());
	return *this;
}

Cure					*Cure::clone() const
{
	return new Cure(*this);
}

void				Cure::use(ICharacter &target)
{
	std::cout << "*Heal " << target.getName() << "'s Wound*" << std::endl;
	AMateria::use(target);
}

			Cure::~Cure()
{
}
