/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:20:41 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/07 19:44:54 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	NinjaTrap: public ClapTrap
{

	private:

	public:
				NinjaTrap();
				NinjaTrap(std::string name);
		void	NinjaShoebox(FragTrap &f);
		void	NinjaShoebox(ScavTrap &f);
		void	NinjaShoebox(NinjaTrap &f);
			~NinjaTrap();
};
#endif
