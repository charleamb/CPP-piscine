/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:28:42 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/23 18:48:41 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
#include "Zombie.hpp"
#include <iostream>

class	ZombieEvent {

	private:

		std::string	_type;

	public:
		Zombie	*newZombie(std::string name);
		void	setZombietype(std::string type);
		void	randomChump();
};

#endif
