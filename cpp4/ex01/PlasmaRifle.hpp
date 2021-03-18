/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:22:04 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 09:45:06 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
#include "Aweapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:

	public:

		PlasmaRifle();
	//	PlasmaRifle(int apcost, int damage);
		~PlasmaRifle();
		virtual void attack() const;
};

#endif
