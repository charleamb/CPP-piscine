/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:20:41 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/06 16:06:25 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <random>
#include <cstdlib>

class	ClapTrap
{
	private:

		unsigned int		_Nrjpoint;
		unsigned int		_maxNrjpoint;
		unsigned int		_Hitpoint;
		const static int	_maxHitpoint = 100;
		unsigned int		_meleeatkdmg;
		unsigned int		_rangeatkdmg;
		unsigned int		_armorreduction;
		unsigned int		_level;
		std::string			_name;

	public:

				ClapTrap();
				ClapTrap(std::string name, unsigned int hp, unsigned int nrj, unsigned int maxnrj, unsigned int mele, unsigned int range, unsigned int armor, unsigned int lvl);
		void	RangedAttack(std::string const &target);
		void	MeleeAttack(std::string const &target);
		void	TakeDamage(unsigned int dmg);
		void	BeRepaired(unsigned int dmg);
		void	setnrj(int nrj);
		void	setHit(int hit);
unsigned int	getrange();
unsigned int	getmelee();
unsigned int	getarmor();
unsigned int	getmaxNrj();
unsigned int	getNrj();
unsigned int	getmaxHit();
unsigned int	getHit();
		std::string	getname();
		virtual	~ClapTrap();
};
#endif
