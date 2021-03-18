/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 17:37:01 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/10 10:49:12 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class	Peon : public	Victim
{
	private:

	public:

		Peon();
		Peon(std::string name);
		virtual void	getPolymorphed() const;
		~Peon();
};

std::ostream	&operator<<(std::ostream &o, Peon &f);

#endif
