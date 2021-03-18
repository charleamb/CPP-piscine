/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:22:04 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 17:01:07 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
#include <iostream>

class AWeapon
{
	private:

		std::string	_name;
		int			_dmg;
		int			_apcost;

	public:

		AWeapon();
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~AWeapon();
		std::string getName() const;
		int			getDmg() const;
		int			getApcost() const;
		virtual void attack() const = 0;
};

#endif
