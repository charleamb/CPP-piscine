/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:09:35 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/19 10:47:05 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:

			AMateria			*_bag[4];
			std::string			_name;
			int					_nbm;

	public:
									Character();
									Character(std::string const name);
									Character(const Character &to_copy);
		Character					&operator=(const Character &to_copy);
		virtual std::string const	&getName() const;
		AMateria const				&getBag(int idx) const;
		virtual void				equip(AMateria	*m);
		virtual void				unequip(int idx);
		void						switche();
		virtual void				use(int idx, ICharacter& target);
		virtual						~Character();

};
#endif
