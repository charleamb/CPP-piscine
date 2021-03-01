/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:04:22 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/01 15:59:11 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"
void	Pony::whopony()
{
	_name = "jumper";
	_race = "shetland";
	_couleur = "maron";
	_taille = 107;
	_poids = 80;
	_age = 15;
}

void	Pony::initstack()
{
	Pony	jumper;

	jumper.whopony();
	jumper.ponyOnTheStack();
	for (int i = 0;	i < 5 ; i++)
	{
		jumper._poids = jumper._poids + 20;
		std::cout << jumper._poids;
		std::cout << "second stack" << std::endl;
	}
}
void	Pony::ponyOnTheStack()
{
	Pony	jumper;

	jumper.whopony();
	for (int i = 0;	i < 5 ; i++)
	{
		jumper._poids = jumper._poids + 20;
		std::cout << jumper._poids;
		std::cout << "first stack" << std::endl;
	}
}

void	Pony::initheap()
{
	Pony	*jumper;

	jumper = new Pony;
	jumper->whopony();
	for (int i = 0;	i < 5 ; i++)
	{
		jumper->_poids = jumper->_poids + 20;
		std::cout << jumper->_poids;
		std::cout << "First heap" << std::endl;
	}
	delete	jumper;
	jumper->ponyOnTheHeap();
}

void	Pony::ponyOnTheHeap()
{
	Pony	*jumper;

	jumper = new Pony;
	jumper->whopony();
	for (int i = 0;	i < 5 ; i++)
	{
		jumper->_poids = jumper->_poids + 20;
		std::cout << jumper->_poids;
		std::cout << "second heap" << std::endl;
	}
	delete jumper;
}
