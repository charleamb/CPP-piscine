/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:09:35 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/18 11:36:24 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class ICharacter
{
	public:
		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria	*m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;
		virtual						~ICharacter();

};
#endif
