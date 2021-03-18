/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RedScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:22:04 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/15 16:47:29 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REDSCORPION_HPP
# define REDSCORPION_HPP
#include "Enemy.hpp"

class RedScorpion : public Enemy
{
	private:

	public:

		RedScorpion();
		RedScorpion &operator=(const RedScorpion &rs);
		virtual ~RedScorpion();
};

#endif
