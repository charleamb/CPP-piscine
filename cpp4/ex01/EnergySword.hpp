/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnergySword.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:22:04 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 09:44:43 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENERGYSWORD_HPP
# define ENERGYSWORD_HPP
#include "Aweapon.hpp"

class EnergySword : public AWeapon
{
	private:

	public:

		EnergySword();
	//	EnergySword(int apcost, int damage);
		~EnergySword();
		virtual void attack() const;
};

#endif
