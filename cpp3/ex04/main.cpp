/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:36:00 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/09 09:18:30 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	srand(time(NULL));
//	FragTrap		a("Blizt");
//	ScavTrap		b("Weirdy");
//	NinjaTrap		c("Azuma");
	NinjaTrap		d("Tanjiro");
	SuperTrap		child("Billy");

//	b.MeleeAttack("Tom");
//	b.RangedAttack("Mugiwara");
//	b.BeRepaired(15);
//	b.challengeNewcomer("Corrector");
//	b.MeleeAttack("Jojo");
//	c.NinjaShoebox(a);
//	d.NinjaShoebox(b);
//	c.NinjaShoebox(d);
	std::cout << "-----------child: " << child.getname() << std::endl;
	child.statglobal();
	child.NinjaShoebox(d);
	child.RangedAttack("Poutine");
	child.MeleeAttack("un Ours");
	child.vaulthunter_dot_exe("dami");
	child.BeRepaired(50);
	child.TakeDamage(50);
	child.BeRepaired(35);
	return	0;
}
