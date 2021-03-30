/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:56:42 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/30 10:51:04 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <ctime>
#include <cstring>

class	Base
{
	public:
		virtual	~Base()
		{
		std::cout << "fuckbase" << std::endl;
		}
};

class	A: public Base
{
};

class	B: public Base
{
};

class	C: public Base
{
};

#endif
