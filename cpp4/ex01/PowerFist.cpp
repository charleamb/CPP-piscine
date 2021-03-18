/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:35:09 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 09:45:53 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PowerFist.hpp"

			PowerFist::PowerFist()//int apcost, int damage)
			: AWeapon("Power Fist", 8, 50)
{
}
void		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
			PowerFist::~PowerFist()
{
}
