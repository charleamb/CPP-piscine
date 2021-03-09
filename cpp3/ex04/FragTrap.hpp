/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:20:41 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/08 19:36:09 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap
{

	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		virtual	void	RangedAttack(std::string const &target) const;
		virtual	void	MeleeAttack(std::string const &target) const;
		void			vaulthunter_dot_exe(std::string const &target);
		virtual int		baseHitPoints() const;
		virtual int		maxHitPoints() const;
		virtual int		baseEnergyPoints() const;
		virtual int		maxEnergyPoints() const;
		virtual int		level() const;
		virtual int		meleeAttackDamage() const;
		virtual int		rangedAttackDamage() const;
		virtual int		armorAttackReduction() const;
		~FragTrap();
};
#endif
