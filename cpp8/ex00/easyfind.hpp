/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 11:20:49 by chgilber          #+#    #+#             */
/*   Updated: 2021/04/02 11:18:35 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <string>

template <typename T>
bool	easyfind(T &conte, int i)
{
	for (typename T::iterator it = conte.begin(); it != conte.end(); it++)
	{
			if (i == *it)
			{
				std::cout <<"here: "<< *it << std::endl;
				return true;
			}
			std::cout << *it << std::endl;
	}
	return false;
}

#endif
