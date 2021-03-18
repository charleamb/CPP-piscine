/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:09:35 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/18 10:45:18 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:

							Ice();
							Ice(const Ice &a);
		Ice					&operator=(const Ice &to_copy);
		virtual Ice			*clone() const;
		virtual void		use(ICharacter &target);
		~Ice();

};
#endif
