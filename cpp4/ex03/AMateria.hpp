/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:09:35 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/18 09:36:38 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria
{
	private:

			unsigned int	_xp;
			std::string		_type;

	
	public:

		AMateria();
		AMateria(std::string const & type);
		Amateria(const AMateria &a);
		AMateria	&operator=(const AMateria &to_copy);
		std::string const	&getType() const; //Returns the materia type
		unsigned int		getXP() const; //Returns the Materia's XP
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
		~AMateria();

};
#endif
