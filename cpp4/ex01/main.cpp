/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:59:37 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 17:06:17 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "EnergySword.hpp"
#include "Character.hpp"
#include "RedScorpion.hpp"
#include "SuperMutant.hpp"
#include "Enemy.hpp"

int		main()
{
	Character* me = new Character("me");
	std::cout << *me;
	
	Enemy* b = new RedScorpion();
	Enemy* a = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* es = new EnergySword();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(es);
	std::cout << *me;
	me->attack(b);
	me->attack(a);
	me->equip(pf);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	delete pr;
	delete pf;
	delete es;
	delete me;
	delete a;
	return 0;
}
