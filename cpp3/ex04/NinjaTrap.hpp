/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:20:41 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/08 19:36:34 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	NinjaTrap: virtual public ClapTrap
{

	private:

	public:
						NinjaTrap();
						NinjaTrap(std::string name);
		void			NinjaShoebox(FragTrap &f);
		void			NinjaShoebox(ScavTrap &f);
		void			NinjaShoebox(NinjaTrap &f);
		virtual	void	RangedAttack(std::string const &target) const;
		virtual	void	MeleeAttack(std::string const &target) const;
		virtual int		baseHitPoints() const;
		virtual int		maxHitPoints() const;
		virtual int		baseEnergyPoints() const;
		virtual int		maxEnergyPoints() const;
		virtual int		level() const;
		virtual int		meleeAttackDamage() const;
		virtual int		rangedAttackDamage() const;
		virtual int		armorAttackReduction() const;
			~NinjaTrap();
};
#endif
