/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:20:41 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/06 11:22:26 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include <cstdlib>

class	FragTrap {

	private:

		unsigned int		_Hitpoint;
		const static int	_maxHitpoint = 100;
		unsigned int		_Nrjpoint;
		const static int	_maxNrjpoint = 100;
		unsigned int		_level;
		std::string			_name;
		unsigned int		_meleeatkdmg;
		unsigned int		_rangeatkdmg;
		unsigned int		_armorreduction;

	public:

				FragTrap();
				FragTrap(std::string name);
		void	RangedAttack(std::string const &target);
		void	MeleeAttack(std::string const &target);
		void	TakeDamage(unsigned int dmg);
		void	BeRepaired(unsigned int dmg);
		void	vaulthunter_dot_exe(std::string const &target);
				
				FragTrap	&operator=(const FragTrap &f);
		bool	operator>(const FragTrap &f) const;
		bool	operator<(const FragTrap &f) const;
		bool	operator>=(const FragTrap &f) const;;
		bool	operator<=(const FragTrap &f) const;
		bool	operator==(const FragTrap &f) const;
		bool	operator!=(const FragTrap &f) const;;
		FragTrap	operator+(const FragTrap &f) const;
		FragTrap	operator-(const FragTrap &f) const;
		FragTrap	operator*(const FragTrap &f) const;
		FragTrap	operator/(const FragTrap &f) const;
		FragTrap	&operator++(void);
		FragTrap	operator++(int);
		FragTrap	&operator--(void);
		FragTrap	operator--(int);
		static const FragTrap		&min(const FragTrap &a, const FragTrap &b);
		static const FragTrap		&max(const FragTrap &a, const FragTrap &b);
		static FragTrap		&min(FragTrap &a, FragTrap &b);
		static FragTrap		&max(FragTrap &a, FragTrap &b);
		~FragTrap();
};

const FragTrap		&min(const FragTrap &a, const FragTrap &b);
const FragTrap		&max(const FragTrap &a, const FragTrap &b);
FragTrap		&min(FragTrap &a, FragTrap &b);
FragTrap		&max(FragTrap &a, FragTrap &b);

std::ostream	&operator<<(std::ostream &o, const FragTrap &f);

#endif
