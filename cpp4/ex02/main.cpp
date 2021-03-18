/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:13:11 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/18 09:02:19 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	std::cout << "basic test ^^^^^^^^^^-------" << std::endl;
	ISpaceMarine* jun = new TacticalMarine;
	ISpaceMarine* jorge = new TacticalMarine;
	ISpaceMarine* emile = new TacticalMarine;
	ISpaceMarine* kat = new TacticalMarine;
	ISpaceMarine* conord = new AssaultTerminator;
	ISquad* squady = new Squad;
	squady->push(jun);
	squady->push(jorge);
	squady->push(conord);
	squady->push(emile);
	squady->push(kat);
	for (int i = 0; i < squady->getCount(); ++i)
	{
		ISpaceMarine* cur = squady->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete squady;
	return 0;
}
