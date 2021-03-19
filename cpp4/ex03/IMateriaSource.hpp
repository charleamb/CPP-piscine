/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:00:14 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/19 09:03:16 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
		public:

		virtual void		learnMateria(AMateria* m) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
		virtual				~IMateriaSource() {}
};

#endif
