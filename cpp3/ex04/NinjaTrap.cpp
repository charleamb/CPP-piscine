/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:24 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/09 09:23:08 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

		NinjaTrap::NinjaTrap()
{
}
		NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 30, 60, 5, 0)
{
	std::cout << "***Ninjaaa  constructor called***" << std::endl;
}

void	NinjaTrap::NinjaShoebox(FragTrap &f)
{
	std::cout << "NINJ4-TP <" << getname() <<
		"> fais un combat de Stand avec FR4G-TP <" << f.getname() << ">" << std::endl;
}

void	NinjaTrap::NinjaShoebox(ScavTrap &f)
{
	std::cout << "NINJ4-TP <" << getname() << "> fais du beatbox avec SC4V-TP <"
		<< f.getname() << ">" << std::endl;
}

void	NinjaTrap::NinjaShoebox(NinjaTrap &f)
{
	std::cout << "NINJ4-TP <" << getname() << "> embauche un avec NINJ4-TP <"
		<< f.getname() << "> pour faire des sushis" << std::endl;
}
void	NinjaTrap::MeleeAttack(std::string const &target) const
{
	std::cout << "NINJ4-TP <" << getname() << "> attaque <" << target <<
	"> avec MeleeAttack, causant  <"<< meleeAttackDamage() << "> points de dégâts !"
	<< std::endl;
}

void	NinjaTrap::RangedAttack(std::string const &target) const
{
	std::cout << "NINJ4-TP <" << getname() << "> attaque <" << target <<
	"> avec RangedAttack, causant  <"<< rangedAttackDamage() << "> points de dégâts !"
	<< std::endl;
}


int NinjaTrap::baseHitPoints() const
{
	return 60;
}

int NinjaTrap::maxHitPoints() const
{
	return 60;
}

int NinjaTrap::baseEnergyPoints() const
{
	return 120;
}

int NinjaTrap::maxEnergyPoints() const
{
	return 120;
}

int NinjaTrap::level() const
{
	return 1;
}

int NinjaTrap::meleeAttackDamage() const
{
	return 60;
}

int NinjaTrap::rangedAttackDamage() const
{
	return 5;
}

int NinjaTrap::armorAttackReduction() const
{
	return 0;
}
NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Detruit" << std::endl;
}
