/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:30:36 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/24 11:51:55 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int		valid(char	*av)
{
	int ok = 1;
	std::string avs = av;
	if (av[0] == '-' || av[0] == '+')
		av++;
	for (int i = 0; av[i]; i++)
	{
		if (isdigit(av[i]) == 0 && av[i] != '.' && av[i] != 'f')
			ok = 0;
	}
	if (!avs.compare("nan")	|| !avs.compare("nanf")  ||
			!avs.compare("-inf")	|| !avs.compare("-inff") ||
			!avs.compare("+inf") || !avs.compare("+inff") ||
			!avs.compare("inf")	|| !avs.compare("inff"))
		return 1;
	return ok;
}

int		main(int ac, char **av)
{
	(void)ac;
	float	convf;
	double	convd;
	int		convi;
	if (ac != 2)
	{
		std::cout << " Need only 1 Arg" << std::endl;
		return 0;
	}
	convf = (float)atof(av[1]);
	convd = atof(av[1]);
	convi = atoi(av[1]);
	if (!valid(av[1]))
	{
		convf = 0;
		convd = 0;
		convi = 0;
	}
	printchar(convi, av[1]);
	printint(convi, av[1]);
	printfloat(convf, av[1]);
	printdouble(convd, av[1]);
	return 0;
}
