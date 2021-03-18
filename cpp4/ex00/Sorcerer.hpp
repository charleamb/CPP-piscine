/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 17:37:01 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/10 10:36:49 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"
#include <iostream>

class	Sorcerer
{
	private:

		std::string		_name;
		std::string		_title;

	public:

		Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer	&f);
		std::string	getname();
		std::string	gettitle();
		void		polymorph(Victim const &v) const;
		~Sorcerer();
};

std::ostream	&operator<<(std::ostream &o, Sorcerer &f);

#endif
