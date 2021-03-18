/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:22:04 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 09:45:16 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
#include "Aweapon.hpp"

class PowerFist : public AWeapon
{
	private:

	public:

		PowerFist();
	//	PowerFist(int apcost, int damage);
		~PowerFist();
		virtual void attack() const;
};

#endif
