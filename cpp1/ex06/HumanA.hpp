/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:22:15 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/25 18:11:31 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanA {

	private:

		std::string	_name;
		Weapon		*_weapon;

	public:

		HumanA(std::string	name, Weapon	type);
		std::string		Getname();
		void	attack();
						~HumanA();
};

#endif
