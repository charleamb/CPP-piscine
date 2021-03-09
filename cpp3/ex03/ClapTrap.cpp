/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:24 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/08 19:10:53 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


		ClapTrap::ClapTrap()
{
}
		ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int hpmax, unsigned int nrj, unsigned int maxnrj, unsigned int mele, unsigned int range, unsigned int armor, unsigned int lvl)
{
	std::cout << "Mere constructor called" << std::endl;
	_name = name;
	_Hitpoint = hp;
	_maxHitpoint = hpmax;
	_level = lvl;
	_Nrjpoint = nrj;
	_maxNrjpoint = maxnrj;
	_meleeatkdmg = mele;
	_rangeatkdmg = range;
	_armorreduction = armor;
}


void	ClapTrap::TakeDamage(unsigned int dmg)
{
	dmg = dmg - _armorreduction;
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

void	ClapTrap::BeRepaired(unsigned int dmg)
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

void	ClapTrap::MeleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name << "> attaque <" << target <<
	" > avec MeleeAttack, causant  < "<< _meleeatkdmg << "> points de dégâts !"
	<< std::endl;
}

void	ClapTrap::RangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name << "> attaque <" << target <<
	" > avec RangedAttack, causant  < "<< _rangeatkdmg << "> points de dégâts !"
	<< std::endl;
}

void			ClapTrap::setnrj(int nrj)
{
	_Nrjpoint = nrj;
}

void			ClapTrap::setHit(int hit)
{
	_Hitpoint = hit;
}
unsigned int	ClapTrap::getrange()
{
	return _rangeatkdmg;
}
unsigned int	ClapTrap::getmelee()
{
	return _meleeatkdmg;
}
unsigned int	ClapTrap::getarmor()
{
	return _armorreduction;
}

unsigned int	ClapTrap::getmaxNrj()
{
	return _maxNrjpoint;
}
unsigned int	ClapTrap::getNrj()
{
	return _Nrjpoint;
}

unsigned int	ClapTrap::getmaxHit()
{
	return _maxHitpoint;
}
unsigned int	ClapTrap::getHit()
{
	return _Hitpoint;
}
std::string		ClapTrap::getname()
{
	return _name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P Detruit" << std::endl;
}
