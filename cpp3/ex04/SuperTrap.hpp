/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:20:41 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/08 19:38:23 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class	SuperTrap:  public NinjaTrap, public FragTrap
{

	private:

	public:
			SuperTrap();
			SuperTrap(std::string name);
		int	baseHitPoints() const;
		int maxHitPoints() const;
		virtual int baseEnergyPoints() const;
		virtual int maxEnergyPoints() const;
		virtual int level() const;
		virtual int meleeAttackDamage() const;
		virtual int rangedAttackDamage() const;
		virtual int armorAttackReduction() const;
		virtual void RangedAttack(const std::string &target) const;
		virtual void MeleeAttack(const std::string &target) const;
		~SuperTrap();
};
#endif
