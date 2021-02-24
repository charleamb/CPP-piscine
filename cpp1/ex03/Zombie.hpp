/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:22:15 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/23 20:42:51 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {

	private:

		std::string _name;
		std::string _type;

	public:
		void	talk();
		Zombie();
		Zombie(std::string name, std::string type);
		std::string		Getname();
		std::string		Gettype();
						~Zombie();
};

#endif
