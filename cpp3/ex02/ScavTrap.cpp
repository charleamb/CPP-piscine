/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:24 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/06 16:04:42 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

		ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 50, 20, 15 , 3,1)
{
	std::cout << "SC4V -- string constructor called -- *_*" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	int		alea;
	std::string	chal[5] = { "pile ou face" , "fait des pompes a une main" , "boire une bouteille cul sec" ,
	"toucher le bout du nez avec la langue" , "manger un scorpion"};
	
	alea = std::rand()%5;
	std::cout << "SC4V-Tp <" << getname() << "> lance le defi " << chal[alea]
	<< " <" << target << "> *_* !"<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V Detruit" << std::endl;
}
