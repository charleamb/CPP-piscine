/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:09:35 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/18 10:45:09 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:

							Cure();
							Cure(const Cure &a);
		Cure					&operator=(const Cure &to_copy);
		virtual Cure			*clone() const;
		virtual void		use(ICharacter &target);
		~Cure();

};
#endif
