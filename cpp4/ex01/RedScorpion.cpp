/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RedScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:35:09 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 16:47:21 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RedScorpion.hpp"

			RedScorpion::RedScorpion(): Enemy(80, "RedScorpion")
{
	std::cout << "* click click click *" << std::endl;
}
			RedScorpion	&RedScorpion::operator=(const RedScorpion &rs)
{
	_hp = rs._hp;
	_type = rs._type;
	return	*this;
}

			RedScorpion::~RedScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
