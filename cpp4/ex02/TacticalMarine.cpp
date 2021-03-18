/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/17 18:02:41 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

		TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

		TacticalMarine::TacticalMarine(const TacticalMarine &e)
{
	(void)e;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}
TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &e)
{
	(void)e;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return *this;
}

ISpaceMarine	*TacticalMarine::clone() const
{
	return new TacticalMarine(*this);
}

void		TacticalMarine::battleCry() const
{
	std::cout <<  "For the holy PLOT!" << std::endl;
}

void		TacticalMarine::rangedAttack() const
{
	std::cout <<  "* attacks with a bolter *" << std::endl;
}
void		TacticalMarine::meleeAttack() const
{
	std::cout <<  "* attacks with a chainsword *" << std::endl;
}

			TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}
