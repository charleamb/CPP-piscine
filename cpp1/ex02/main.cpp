/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 10:47:16 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/23 19:04:53 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>

int		main()
{
	ZombieEvent	event;

	srand(time(NULL));
	Zombie	z("darksasuke", "rageux");
	event.setZombietype("tilter");
	Zombie	*z2 = event.newZombie("Goldynou33");
	event.randomChump();
	Zombie	z3("darknaruto", "rageux");
	event.randomChump();
	delete z2;
}
