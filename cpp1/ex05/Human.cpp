/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:39:39 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/24 18:41:04 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"Human.hpp"

Human::Human()
{
	_name = "boby";
	_brain = new Brain(200,1);
}

std::string		Human::Getname()
{
	return	_name;
}

Brain		&Human::getBrain()
{
	return	*_brain;
}
std::string		Human::identify()
{
	return _brain->identify();
}

Human::~Human()
{
	delete _brain;
	std::cout << "DEAD" << std::endl;

}

