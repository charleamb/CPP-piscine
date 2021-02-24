/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 10:37:36 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/23 18:49:03 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"ZombieEvent.hpp"
#include "Zombie.hpp"

std::string	randomname()
{
	std::string	name[5] = { "paul" , "paulo" , "paulina" , "paulino" , "paulette"};

	return (name[std::rand()%5]);
}

void	ZombieEvent::setZombietype(std::string type)
{
	_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, _type);
}
void	ZombieEvent::randomChump()
{
	Zombie(randomname(), _type);
}



