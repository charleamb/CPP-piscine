/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 17:37:01 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/10 10:53:21 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class	Victim
{
	private:

		std::string		_name;

	public:

		Victim();
		Victim(std::string name);
		Victim(const Victim	&f);
		std::string	getname() const;
		virtual void	getPolymorphed() const;
		~Victim();
};

std::ostream	&operator<<(std::ostream &o, Victim &f);

#endif
