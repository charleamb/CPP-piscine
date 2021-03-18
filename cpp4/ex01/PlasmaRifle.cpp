/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:35:09 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 10:10:48 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PlasmaRifle.hpp"

			PlasmaRifle::PlasmaRifle()//int apcost, int damage)
			: AWeapon("Plasma Rifle", 5, 21)
{
}
void		PlasmaRifle::attack() const
{
	std::cout << "* Pioouuuu piou pioouuuu*" << std::endl;

}
			PlasmaRifle::~PlasmaRifle()
{
}
