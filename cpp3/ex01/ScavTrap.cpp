/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:24 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/08 18:28:47 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <cmath>

		ScavTrap::ScavTrap()
{
	std::cout << "SC4V -- init constructor calledd -- f_f" << std::endl;
	_Hitpoint = 100;
	_Nrjpoint = 50;
	_level = 1;
	_meleeatkdmg = 20;
	_rangeatkdmg = 15;
	_armorreduction = 3;


}
		ScavTrap::ScavTrap(std::string name)
{
	std::cout << "SC4V -- string constructor called -- *_*" << std::endl;
	_name = name;
	_Hitpoint = 100;
	_Nrjpoint = 50;
	_level = 1;
	_meleeatkdmg = 20;
	_rangeatkdmg = 15;
	_armorreduction = 3;
}

void	ScavTrap::TakeDamage(unsigned int dmg)
{
	dmg = dmg - _armorreduction;
	if ( _Hitpoint <= 0)
		std::cout << "SC4V-TP <" << _name << "> already dead !"<< std::endl;
	else if ( _Hitpoint > dmg)
	{
		std::cout << "SC4V-TP <" << _name << "> TakeDamage <" << dmg << std::endl;
		_Hitpoint = _Hitpoint - dmg;
	}
	else if ( _Hitpoint < dmg)
	{
		std::cout << "F:R4G-TP <" << _name << "> TakeDamage <" << _Hitpoint << std::endl;
		_Hitpoint = 0;
	}
}

void	ScavTrap::BeRepaired(unsigned int dmg)
{
	if ( _Hitpoint == _maxHitpoint)
		std::cout << "SC4V-TP <" << _name << "> already Full HP !"<< std::endl;
	else if ( _Hitpoint + dmg >= _maxHitpoint)
	{
		std::cout << "SC4V-TP <" << _name << "> BeRepaired (HP)<" << 
		_maxHitpoint - _Hitpoint << "> point" <<  std::endl;
		_Hitpoint = _maxHitpoint;
	}
	else if ( _Hitpoint + dmg < _maxHitpoint)
	{
		std::cout << "SC4V-TP <" << _name << "> BeRepaired (HP)<" << dmg << 
		"> point" << std::endl;
		_Hitpoint = _Hitpoint + dmg;
	}
	if ( _Nrjpoint == _maxNrjpoint)
		std::cout << "SC4V-TP <" << _name << "> already Full NRJ !"<< std::endl;
	else if ( _Nrjpoint + dmg >= _maxNrjpoint)
	{
		std::cout << "SC4V-TP <" << _name << "> BeRepaired (NRJ)<" << _maxNrjpoint - _Nrjpoint << "> point" << std::endl;
		_Nrjpoint = _maxNrjpoint;
	}
	else if ( _Nrjpoint + dmg < _maxNrjpoint)
	{
		std::cout << "SC4V-TP <" << _name << "> BeRepaired (NRJ)<" << dmg <<
		"> point" << std::endl;
		_Nrjpoint = _Nrjpoint + dmg;
	}
}

void	ScavTrap::MeleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP <" << _name << "> attaque <" << target <<
	" > avec MeleeAttack, causant  < "<< _meleeatkdmg << "> damages O_o !"
	<< std::endl;
}

void	ScavTrap::RangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP <" << _name << "> attaque <" << target <<
	" > avec RangedAttack, causant  < "<< _rangeatkdmg << "> damages [*_*] !"
	<< std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	int		alea;
	std::string	chal[5] = { "pile ou face" , "fait des pompes a une main" , "boire une bouteille cul sec" ,
	"toucher le bout du nez avec la langue" , "manger un scorpion"};
	
	alea = std::rand()%5;
	std::cout << "SC4V-Tp <" << _name << "> lance le defi " << chal[alea]
	<< " <" << target << "> *_* !"<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V Detruit" << std::endl;
}
