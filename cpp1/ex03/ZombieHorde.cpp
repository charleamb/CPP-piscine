/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 10:37:36 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/24 12:23:52 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"ZombieHorde.hpp"
#include	"Zombie.hpp"

std::string	randomname()
{
	std::string	name[5] = { "jack" , "jacko" , "jackline" , "jacki" , "jackette"};

	return (name[std::rand()%5]);
}
void	ZombieHorde::sharetalk()
{
	for (int i = 0; i < _n ; i++)
{
		_zombies[i].talk();
		std::cout << i << std::endl;
		}
}

ZombieHorde::ZombieHorde(int	n)
{
	_n = n;
	_zombies = new Zombie[n];
	for (int i = 0; i < n ; i++)
		_zombies[i] = Zombie(randomname(), "Horddddd");
}

ZombieHorde::~ZombieHorde()
{
	delete[] _zombies;
	std::cout << "(" << _n << ") x  ARGGG" << std::endl;
}




