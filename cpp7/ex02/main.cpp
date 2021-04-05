/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 22:34:28 by chgilber          #+#    #+#             */
/*   Updated: 2021/04/02 11:35:44 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int>		tab(7);
	Array<int>		tabi(tab);
	Array<float>	tabf(7);
	Array<char>		tabc(7);
	Array<char>		tabn;

	try
	{
		tabi = tab;
		for (unsigned int i = 0; i < tab.size(); i++)
		{
			std::cout << "tab char [" << i << "] = " << tab[i] << " | ";
			std::cout << "tab float [" << i << "] = " << tabf[i] << " | ";
			std::cout << "tab char [" << i << "] = " << tabc[i] << std::endl;
		}
		std::cout << "----- Fill the tab, tabf, tabc -----" << std::endl;
		for (unsigned int i = 0; i < tab.size(); i++)
			tab[i] = 42;
		for (unsigned int i = 0; i < tabf.size(); i++)
			tabf[i] = 42.42;
		for (unsigned int i = 0; i < tabc.size(); i++)
			tabc[i] = 42;
		for (unsigned int i = 0; i < 6; i++)
		{
			std::cout << "tab char [" << i << "] = " << tab[i] << " | ";
			std::cout << "tab float [" << i << "] = " << tabf[i] << " | ";
			std::cout << "tab char [" << i << "] = " << tabc[i] << std::endl;
		}
		std::cout << "Acces to tabn :" << tabn[0] << std::endl;
	//	std::cout << "Acces to tab[15] :" << tab[15] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
