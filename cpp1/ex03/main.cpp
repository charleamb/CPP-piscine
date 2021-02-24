/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 10:47:16 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/24 12:23:53 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>

int		main()
{
	srand(time(NULL));
	ZombieHorde hordy(4);
	hordy.sharetalk();
}
