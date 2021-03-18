/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:10:01 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/17 18:09:44 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

#include <iostream>

class ISpaceMarine
{
	public:

	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
	virtual ~ISpaceMarine() {};
};

#endif
