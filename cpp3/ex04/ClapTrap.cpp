/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:24 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/09 09:21:33 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


		ClapTrap::ClapTrap()
{
	std::cout << "mere init constructor called" << std::endl;
	_Hitpoint = 100;
	_level = 1;
}
		ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int hpmax, unsigned int nrj, unsigned int maxnrj, unsigned int mele, unsigned int range, unsigned int armor, unsigned int lvl)
{
	std::cout << "CL4P constructor called" << std::endl;
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
		std::cout << "* <" << _name << "> already dead !"<< std::endl;
	else if ( _Hitpoint > dmg)
	{
		std::cout << "* <" << _name << "> TakeDamage <" << dmg << ">" << std::endl;
		_Hitpoint = _Hitpoint - dmg;
	}
	else if ( _Hitpoint < dmg)
	{
		std::cout << "* <" << _name << "> TakeDamage <" << _Hitpoint << ">" <<  std::endl;
		_Hitpoint = 0;
	}
}

void	ClapTrap::BeRepaired(unsigned int dmg)
{
	if ( _Hitpoint == _maxHitpoint)
		std::cout << "* <" << _name << "> already Full HP !"<< std::endl;
	else if ( _Hitpoint + dmg >= _maxHitpoint)
	{
		std::cout << "* <" << _name << "> BeRepaired (HP)<" << 
		_maxHitpoint - _Hitpoint << "> point" <<  std::endl;
		_Hitpoint = _maxHitpoint;
	}
	else if ( _Hitpoint + dmg < _maxHitpoint)
	{
		std::cout << "* <" << _name << "> BeRepaired (HP)<" << dmg << 
		"> point" << std::endl;
		_Hitpoint = _Hitpoint + dmg;
	}
	if ( _Nrjpoint == _maxNrjpoint)
		std::cout << "* <" << _name << "> already Full NRJ !"<< std::endl;
	else if ( _Nrjpoint + dmg >= _maxNrjpoint)
	{
		std::cout << "* <" << _name << "> BeRepaired (NRJ)<" << _maxNrjpoint - _Nrjpoint << "> point" << std::endl;
		_Nrjpoint = _maxNrjpoint;
	}
	else if ( _Nrjpoint + dmg < _maxNrjpoint)
	{
		std::cout << "* <" << _name << "> BeRepaired (NRJ)<" << dmg <<
		"> point" << std::endl;
		_Nrjpoint = _Nrjpoint + dmg;
	}
}

void	ClapTrap::statglobal()
{
	std::cout << "range:" << getrange() << std::endl;
	std::cout << "melee:" << getmelee() << std::endl;
	std::cout << "armor:" << getarmor() << std::endl;
	std::cout << "maxnrj:" << getmaxNrj() << std::endl;
	std::cout << "nrj:" << getNrj() << std::endl;
	std::cout << "maxHP:" << getmaxHit() << std::endl;
	std::cout << "HP:" << getHit() << std::endl;
	std::cout << "name:" << getname() << std::endl;
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
std::string		ClapTrap::getname() const
{
	return _name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap - "<< _name << " Detruit" << std::endl;
}
