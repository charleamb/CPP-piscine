/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:08:30 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/19 10:01:34 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
		private:

				AMateria	*_slot[4];
				int			_nbsm;

		public:

							MateriaSource();
							MateriaSource(const MateriaSource &to_copy);
		MateriaSource		&operator=(const MateriaSource &to_copy);
		virtual void		learnMateria(AMateria *m);
		virtual AMateria	*createMateria(std::string const &type);
		virtual				~MateriaSource();
};

#endif
