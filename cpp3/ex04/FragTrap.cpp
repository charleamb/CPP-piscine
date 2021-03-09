/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:24 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/09 09:23:37 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}
		FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 30, 20, 5, 1)
{
	std::cout << "frag  constructor called" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		alea;
	int		atkdmg[5] = { 37, 77 , 38 , 1 , 5};
	std::string	atk[5] = { "Ultra laser" , "Demacia's Justice" , "Genkidama" ,
	"Trempette" , "Poele a frire"};
	
	alea = std::rand()%5;
	if (getNrj() >= 25)
	{
		std::cout << "FR4G-TP <" << getname() << "> attaque <" << target <<
		"> avec " << atk[alea] << " , causant  <" << atkdmg[alea] <<
		"> points de dégâts !" << std::endl;
		setnrj(getNrj() - 25);
	}
	else
		std::cout << "Pas assez d'energie <" << getNrj() << "> need 25, R.I.P:/ " << std::endl;
}

void	FragTrap::MeleeAttack(std::string const &target) const
{
	std::cout << "FR4G-TP <" << getname() << "> attaque <" << target <<
	"> avec MeleeAttack, causant  <"<< meleeAttackDamage() << "> points de dégâts !"
	<< std::endl;
}

void	FragTrap::RangedAttack(std::string const &target) const
{
	std::cout << "FR4G-TP <" << getname() << "> attaque <" << target <<
	"> avec RangedAttack, causant  <"<< rangedAttackDamage() << "> points de dégâts !"
	<< std::endl;
}

int FragTrap::baseHitPoints() const
{
	return 100;
}

int FragTrap::maxHitPoints() const
{
	return 100;
}

int FragTrap::baseEnergyPoints() const
{
	return 100;
}

int FragTrap::maxEnergyPoints() const
{
	return 100;
}

int FragTrap::level() const
{
	return 1;
}

int FragTrap::meleeAttackDamage() const
{
	return 30;
}

int FragTrap::rangedAttackDamage() const
{
	return 20;
}

int FragTrap::armorAttackReduction() const
{
	return 5;
}
FragTrap::~FragTrap()
{
	std::cout << "FR4G Detruit" << std::endl;
}
