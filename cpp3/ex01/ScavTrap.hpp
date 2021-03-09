/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:20:41 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/06 12:06:41 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include <cstdlib>

class	ScavTrap {

	private:

		unsigned int		_Hitpoint;
		const static int	_maxHitpoint = 100;
		unsigned int		_Nrjpoint;
		const static int	_maxNrjpoint = 50;
		unsigned int		_level;
		std::string			_name;
		unsigned int		_meleeatkdmg;
		unsigned int		_rangeatkdmg;
		unsigned int		_armorreduction;

	public:

				ScavTrap();
				ScavTrap(std::string name);
		void	RangedAttack(std::string const &target);
		void	MeleeAttack(std::string const &target);
		void	TakeDamage(unsigned int dmg);
		void	BeRepaired(unsigned int dmg);
		void	challengeNewcomer(std::string const &target);
		~ScavTrap();
};
#endif
