/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:22:15 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/24 20:16:08 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include <string>

class	Weapon {

	private:

		std::string	_type;

	public:

		Weapon(std::string	type);
		void	setType(std::string	type);
		std::string		getType();
						~Weapon();
};

#endif
