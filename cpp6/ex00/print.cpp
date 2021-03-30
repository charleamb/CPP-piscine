/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:49:29 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/24 11:50:19 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	printchar(int		conv, char *av)
{
	std::cout << "char: ";
	if (conv > 31 && conv < 127)
		std::cout << (char)conv << std::endl;
	else if (strlen(av) > 1 && conv == 0)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "non printable caracter" << std::endl;
}

void	printint(int		conv, char *av)
{
	std::cout << "int: ";
	if (strlen(av) > 1 && conv == 0)
		std::cout << "impossible" << std::endl;
	else
		std::cout << conv << std::endl;
}

void	printdouble(double	conv, char *av)
{
	std::cout << "double: ";
	if (strlen(av) > 1 && conv == 0)
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	std::cout << conv;
	if (conv == floor(conv))
		std::cout << ".0";
	std::cout << std::endl;
}

void	printfloat(float	conv, char *av)
{
	std::cout << "float: ";
	if (strlen(av) > 1 && conv == 0)
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	std::cout << conv;
	if (conv == floor(conv))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

