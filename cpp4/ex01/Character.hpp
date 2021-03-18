/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:36:40 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 10:38:29 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include <iostream>
#include "Enemy.hpp"
#include "Aweapon.hpp"

class Character
{
	private:
	
		std::string	_name;
		int			_Ap;
		AWeapon		*_weap;
	
	public:
		Character();
		Character(std::string const &name);
		void			recoverAP();
		std::string		getName() const;
		int				getAP() const;
		AWeapon			*getWeapon();
		void			equip(AWeapon *weap);
		void			attack(Enemy *bad);
		~Character();
};
		std::ostream &operator<<(std::ostream &out, Character &c);
#endif
