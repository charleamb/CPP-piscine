/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:47:20 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/25 18:00:20 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	replacef(std::string	line, std::string	replace, int i, int j)
{
	std::string		bef, chg, aft;
	int				b, c, a , r;

	for (b = 0; b < i ; b++)
	{
		bef[b] = line[b];
		std::cout << bef << line[b]  << bef[b] << std::endl;
	}
	bef[b] = '\0';
	for (c = 0; c < j ; c++)
		chg[c] = line[b + c];
	for (a = 0; line[b + c + a] ; a++)
		aft[a] = line[b + c + a];
	std::cout << bef << b << chg << c << aft << a << "replace" << std::endl;
	for (r = 0; replace[r]; r++)
		chg[r] = replace[r];
	chg[r] = '\0';
	std::cout << bef + chg + aft << " fusion " << std::endl;
	return bef + chg + aft;
}

std::string	check(std::string	line, std::string	find, std::string	replace,
int i)
{
	int j = 0;
	for (j = 0; find[j] && line[i + j] && line[i + j] == find[j]; j++)
	{
		std::cout << find[j] << line[i + j] << " in" << std::endl;
	}
	std::cout << j << find.size() << "check" << std::endl;
	if (j == (int)find.size())
		return replacef(line, replace, i, j);
	return line;
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "need --> [file.txt]   [str.find]    [str.replace]" << std::endl;
		return (1);
	}

	std::string		texte	= av[1];
	std::string		find	= av[2];
	std::string		replace	= av[3];
	std::fstream	filew, filer;
	std::string		line;

	filer.open(texte.c_str());
	if (filer.is_open())
	{
		while (!filer.eof())
		{
			getline(filer, line);
			for( int i = 0; line[i] ; i++)
			{
			//	std::cout << line[i] << i << find[0] << std::endl;
				if (line[i] == find[0])
				{
					line = check(line, find, replace, i);
					std::cout << line << "<--after if " << std::endl;
				}
			}
		}
	}
	filer.close();
}
