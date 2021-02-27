/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:47:20 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/27 19:15:44 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

std::string	replacef(std::string	line, std::string	replace, int i, int j)
{
	char		*bef, *chg, *aft;
	int				b, c, a , r;

	bef = new char;
	chg = new char;
	aft = new char;
	for (b = 0; b < i ; b++)
		bef[b] = line[b];
	for (c = 0; c < j ; c++)
		chg[c] = line[b + c];
	for (a = 0; line[b + c + a] ; a++)
		aft[a] = line[b + c + a];
	for (r = 0; replace[r]; r++)
		chg[r] = replace[r];
	return (std::string)bef + (std::string)chg + (std::string)aft;
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
	int				oc;
	
	filer.open(texte.c_str(), std::fstream::in);
	filew.open((texte + ".replace").c_str(), std::fstream::out);
	if (!filew)
	{
		filew.close();
		std::cout << "I/O Error." << std::endl;
		return 1;
	}
	if (!filer)
	{
		filer.close();
		std::cout << "File does not exists." << std::endl;
		return 1;
	}
	if (filew.is_open())
	{
		while (!filer.eof())
		{
			getline(filer, line);
			oc = 0;
			for( int i = 0; line[i] ; i++)
			{
				if (line[i] == find[0])
				{
					line = check(line, find, replace, i);
					oc = 1;
					filew << line;
				}
			}
			if (!oc)
				filew << line;
			if (line[line.size() - 1] != '\0')
				filew << '\n';
		}
	}
	filer.close();
	filew.close();
}
