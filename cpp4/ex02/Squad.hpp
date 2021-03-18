/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:36:40 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/17 18:11:37 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
	protected:

		typedef struct		s_conte
		{
			ISpaceMarine		*ism;
			struct s_conte		*next;
			int					unitnb;
		}					t_conte;

		t_conte					*_lst_begin;
		int						_count;

	public:

								Squad();
								Squad(Squad const &to_copy);
		Squad					&operator=(Squad const &to_copy);
		virtual int				getCount() const;
		virtual ISpaceMarine*	getUnit(int n) const;
		virtual int				push(ISpaceMarine* unit);
								~Squad();
};

#endif
