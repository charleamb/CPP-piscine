/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:24 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/09 09:13:38 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

		SuperTrap::SuperTrap()
{
}
		SuperTrap::SuperTrap(std::string name) : ClapTrap(name, baseHitPoints(), maxHitPoints(), baseEnergyPoints(), maxEnergyPoints(), meleeAttackDamage(), rangedAttackDamage(), armorAttackReduction(), 1), NinjaTrap(name), FragTrap(name)
{
	std::cout << "super  constructor called" << std::endl;
}

int SuperTrap::baseHitPoints() const
{
	return FragTrap::baseHitPoints();
}

int SuperTrap::maxHitPoints() const
{
	return FragTrap::maxHitPoints();
}

int SuperTrap::baseEnergyPoints() const
{
	return NinjaTrap::baseEnergyPoints();
}

int SuperTrap::maxEnergyPoints() const
{
	return NinjaTrap::maxEnergyPoints();
}

int SuperTrap::level() const
{
	return 1;
}

int SuperTrap::meleeAttackDamage() const
{
	return NinjaTrap::meleeAttackDamage();
}

int SuperTrap::rangedAttackDamage() const
{
	return FragTrap::rangedAttackDamage();
}


int SuperTrap::armorAttackReduction() const
{
	return FragTrap::armorAttackReduction();
}

void SuperTrap::RangedAttack(const std::string &target) const
{
	return FragTrap::RangedAttack(target);
}

void SuperTrap::MeleeAttack(const std::string &target) const
{
	return NinjaTrap::MeleeAttack(target);
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap Detruit" << std::endl;
}
