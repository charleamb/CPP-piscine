/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:36:40 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/17 18:05:11 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	protected:
	

	
	public:

		TacticalMarine();
		TacticalMarine(const TacticalMarine &e);
		TacticalMarine	&operator=(const TacticalMarine &e);
		virtual ISpaceMarine*	clone() const;
		virtual void			battleCry() const;
		virtual void			rangedAttack() const;
		virtual void			meleeAttack() const;
		 ~TacticalMarine();
};

#endif
