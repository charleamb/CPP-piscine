/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:36:00 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/06 11:20:25 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	srand(time(NULL));
	FragTrap		a("ninja");

	a.vaulthunter_dot_exe("dimitri");
	a.MeleeAttack("dimitri");
	a.vaulthunter_dot_exe("Teemo");
	a.RangedAttack("Arcanin");
	a.vaulthunter_dot_exe("GERARD");
	a.vaulthunter_dot_exe("Borderman");
	a.vaulthunter_dot_exe("Landman");
	a.BeRepaired(70);
	a.MeleeAttack("dimitri");
	a.vaulthunter_dot_exe("Corrector de CPP");
	a.vaulthunter_dot_exe("Corrector de CPP");
	a.vaulthunter_dot_exe("Corrector de CPP");
	a.vaulthunter_dot_exe("Corrector de CPP");
	return	0;
}
