/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:36:40 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/17 18:04:55 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:

		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &e);
		AssaultTerminator	&operator=(const AssaultTerminator &e);
		virtual ISpaceMarine*	clone() const;
		virtual void			battleCry() const;
		virtual void			rangedAttack() const;
		virtual void			meleeAttack() const;
		 ~AssaultTerminator();
};

#endif
