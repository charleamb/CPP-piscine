/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:09:55 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/30 11:59:07 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
int	mainoffi(void)
{
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cout << "Need 2 arg , but lets do the basic test" << std::endl;
		return mainoffi();
	}
	int a,b;
	a = 15;
	b = 42;
	std::cout << "lets swap av[1] & av[2]" << std::endl;
	swap(av[1], av[2]);
	std::cout << "av[1] = " << av[1] << std::endl;
	std::cout << "av[2] = " << av[2] << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "lets swap a & b" << std::endl;
	swap(a,b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max f(a, b) = " << max(a, b) << std::endl;
	std::cout << "min f(a, b) = " << min(a, b) << std::endl;
	std::cout << "max f(av[1] , av[2]) = " << max(av[1], av[2]) << std::endl;
	return 0;
}
