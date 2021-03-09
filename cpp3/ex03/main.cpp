/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:36:00 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/07 19:37:10 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	srand(time(NULL));
	FragTrap		a("Blizt");
	ScavTrap		b("Weirdy");
	NinjaTrap		c("Azuma");
	NinjaTrap		d("Tanjiro");

	a.vaulthunter_dot_exe("dimitri");
	a.vaulthunter_dot_exe("Corrector de CPP");
	b.MeleeAttack("Tom");
	b.RangedAttack("Mugiwara");
	b.BeRepaired(15);
	b.challengeNewcomer("Corrector");
	b.MeleeAttack("Jojo");
	c.NinjaShoebox(a);
	d.NinjaShoebox(b);
	c.NinjaShoebox(d);
	return	0;
}
