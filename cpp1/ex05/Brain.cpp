/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:39:39 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/24 18:39:18 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<string>
#include	<sstream>
#include	"Brain.hpp"

Brain::Brain(int iq, int life )
{
	_iq = iq;
	_life = life;
}

std::string	Brain::identify()
{
	std::stringstream		retu;

	retu << std::hex << std::showbase << this;
	return retu.str();
}

Brain::~Brain()
{
		std::cout << "AVC" << std::endl;
}

