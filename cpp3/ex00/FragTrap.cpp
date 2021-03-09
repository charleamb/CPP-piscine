/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:24 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/06 13:58:46 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cmath>


		FragTrap::FragTrap()
{
	std::cout << "init constructor called" << std::endl;
	_Hitpoint = 100;
	_Nrjpoint = 100;
	_level = 1;
	_meleeatkdmg = 30;
	_rangeatkdmg = 20;
	_armorreduction = 5;


}
		FragTrap::FragTrap(std::string name)
{
	std::cout << "string constructor called" << std::endl;
	_name = name;
	_Hitpoint = 100;
	_Nrjpoint = 100;
	_level = 1;
	_meleeatkdmg = 30;
	_rangeatkdmg = 20;
	_armorreduction = 5;
//	FragTrap();
}

void	FragTrap::TakeDamage(unsigned int dmg)
{
	dmg = dmg = _armorreduction;
	if ( _Hitpoint <= 0)
		std::cout << "FR4G-TP <" << _name << "> already dead !"<< std::endl;
	else if ( _Hitpoint > dmg)
	{
		std::cout << "FR4G-TP <" << _name << "> TakeDamage <" << dmg << std::endl;
		_Hitpoint = _Hitpoint - dmg;
	}
	else if ( _Hitpoint < dmg)
	{
		std::cout << "FR4G-TP <" << _name << "> TakeDamage <" << _Hitpoint << std::endl;
		_Hitpoint = 0;
	}
}

void	FragTrap::BeRepaired(unsigned int dmg)
{
	if ( _Hitpoint == _maxHitpoint)
		std::cout << "FR4G-TP <" << _name << "> already Full HP !"<< std::endl;
	else if ( _Hitpoint + dmg >= _maxHitpoint)
	{
		std::cout << "FR4G-TP <" << _name << "> BeRepaired (HP)<" << 
		_maxHitpoint - _Hitpoint << "> point" <<  std::endl;
		_Hitpoint = _maxHitpoint;
	}
	else if ( _Hitpoint + dmg < _maxHitpoint)
	{
		std::cout << "FR4G-TP <" << _name << "> BeRepaired (HP)<" << dmg << 
		"> point" << std::endl;
		_Hitpoint = _Hitpoint + dmg;
	}
	if ( _Nrjpoint == _maxNrjpoint)
		std::cout << "FR4G-TP <" << _name << "> already Full NRJ !"<< std::endl;
	else if ( _Nrjpoint + dmg >= _maxNrjpoint)
	{
		std::cout << "FR4G-TP <" << _name << "> BeRepaired (NRJ)<" << _maxNrjpoint - _Nrjpoint << "> point" << std::endl;
		_Nrjpoint = _maxNrjpoint;
	}
	else if ( _Nrjpoint + dmg < _maxNrjpoint)
	{
		std::cout << "FR4G-TP <" << _name << "> BeRepaired (NRJ)<" << dmg <<
		"> point" << std::endl;
		_Nrjpoint = _Nrjpoint + dmg;
	}
}

void	FragTrap::MeleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name << "> attaque <" << target <<
	" > avec MeleeAttack, causant  < "<< _meleeatkdmg << "> points de dégâts !"
	<< std::endl;
}

void	FragTrap::RangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name << "> attaque <" << target <<
	" > avec RangedAttack, causant  < "<< _rangeatkdmg << "> points de dégâts !"
	<< std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		alea;
	int		atkdmg[5] = { 37, 77 , 38 , 1 , 5};
	std::string	atk[5] = { "Ultra laser" , "Demacia's Justice" , "Genkidama" ,
	"Trempette" , "Poele a frire"};
	
	alea = std::rand()%5;
	if ( _Nrjpoint >= 25)
	{
		std::cout << "FR4G-TP <" << _name << "> attaque <" << target <<
		" > avec " << atk[alea] << " , causant  <" << atkdmg[alea] <<
		"> points de dégâts !" << std::endl;
		_Nrjpoint = _Nrjpoint - 25;
	}
	else
		std::cout << "Pas assez d'energie <" << _Nrjpoint << "> need 25, R.I.P:/ " << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << " FR4G Detruit" << std::endl;
}
