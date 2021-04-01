/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 11:20:49 by chgilber          #+#    #+#             */
/*   Updated: 2021/04/01 11:40:26 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
bool	easyfind(T &v, int i)
{
	for (v::iterator it = v.begin(); it != v.end(); it++)
	{
			if (i == *it)
			{
				std::cout <<"ici "<< *it << std::endl;
				return true;
			}
			std::cout << *it << std::endl;
	}
	return false;
}

#endif
