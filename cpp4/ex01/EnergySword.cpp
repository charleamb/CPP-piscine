/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnergySword.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:35:09 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 10:10:35 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "EnergySword.hpp"

			EnergySword::EnergySword()//int apcost, int damage)
			: AWeapon("Energy Sword", 10, 77)
{
}
void		EnergySword::attack() const
{
	std::cout << "* **Covenant noises**! *" << std::endl;
}
			EnergySword::~EnergySword()
{
}
