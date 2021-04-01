/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:12:48 by chgilber          #+#    #+#             */
/*   Updated: 2021/04/01 12:24:09 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include	<iostream>
#include	<cstdlib>
#include	<cstring>
#include	<cstdio>
#include	<cctype>
#include	<string>

	template <typename T>
void	iter(T *array, int len, void (*f)(T &))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}
	template <typename T>
void	printer(T	&c)
{
	std::cout << c << std::endl;
}

#endif
