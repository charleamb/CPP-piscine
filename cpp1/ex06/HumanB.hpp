/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:22:15 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/27 18:00:58 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanB {

	private:

		std::string	_name;
		Weapon		*_weapon;

	public:

		HumanB(std::string	name);
		std::string		Getname();
		void	setWeapon(Weapon &club);
		void	attack();
						~HumanB();
};

#endif
