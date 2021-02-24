/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:28:42 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/23 20:33:24 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
#include "Zombie.hpp"
#include <iostream>

class	ZombieHorde {

	private:

		Zombie		*_zombies;
		int			_n;

	public:
		ZombieHorde(int n);
//		void	setZombietype(std::string type);
		void	randomChump();
		void	sharetalk();
			~ZombieHorde();
};

#endif
