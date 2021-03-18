/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:36:40 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 16:44:11 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
#include <iostream>
#include <string>

class Enemy
{
	protected:
	
		std::string	_type;
		int			_hp;
		Enemy();
	
	public:

		Enemy(int hp, std::string const & type);
		Enemy(const Enemy &e);
		Enemy	&operator=(const Enemy &e);
		void			setHP(int hp);
		std::string		getType() const;
		int				getHP() const;
		virtual void	takeDamage(int dmg);
		virtual ~Enemy();
};

#endif
