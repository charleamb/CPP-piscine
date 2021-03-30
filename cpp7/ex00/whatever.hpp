/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:12:48 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/30 12:01:01 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include	<iostream>
#include	<cstdlib>
#include	<cstring>
#include	<cstdio>
#include	<cctype>
#include	<string>

	template <typename T>
void	swap(T &A, T &B)
{
	T	tmp = B;

	B = A;
	A = tmp;
}
	template <typename T>
const T &min( const T &A, const T &B)
{
	return A < B ? A : B;
}
	template <typename T>
const T &max( const T &A, const T &B)
{
	return A > B ? A : B;
}
#endif
