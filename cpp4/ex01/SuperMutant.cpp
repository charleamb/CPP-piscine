/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:35:09 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 16:46:44 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "SuperMutant.hpp"

			SuperMutant::SuperMutant(): Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

void		SuperMutant::takeDamage(int dmg)
{
	dmg = dmg - 3;
	Enemy::takeDamage(dmg);
}
			SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}
