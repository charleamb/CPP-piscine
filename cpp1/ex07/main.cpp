/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:47:20 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/26 15:09:59 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
int	gnlpplus(std::fstream	filer, char *line)
{
	char *stock = new char;


	for (int i = 0;	line[i] != '\n' && filer.eof(); i++)
	{
		filer.read(&line[i], 1);
		stock = stock + line[i];
	}
	line = stock;
	return 0;
}

std::string	replacef(std::string	line, std::string	replace, int i, int j)
{
//	std::string		bef, chg, aft;
	char		*bef, *chg, *aft;
	int				b, c, a , r;

	bef = new char;
	chg = new char;
	aft = new char;
	for (b = 0; b < i ; b++)
	{
		bef[b] = line[b];
//		std::cout << bef << line[b]  << bef[b] << std::endl;
	}
//	bef[b] = '\0';
	for (c = 0; c < j ; c++)
		chg[c] = line[b + c];
	for (a = 0; line[b + c + a] ; a++)
		aft[a] = line[b + c + a];
//	std::cout << bef << b << chg << c << aft << a << "replace" << std::endl;
	for (r = 0; replace[r]; r++)
		chg[r] = replace[r];
	chg[r] = '\0';
//	std::cout << bef + chg + aft << " fusion " << std::endl;
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
//	char			*line = new char;
	
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
//	if (filer.is_open())
//	{
		while (!filer.eof())
		{
		//	filer.read(&line[0], 1);
		//	gnlpplus(filer, line);
			getline(filer, line);
			for( int i = 0; line[i] ; i++)
			{
				if (line[i] == find[0])
				{
					line = check(line, find, replace, i);
			//		line[0] = 'T';
					filew << line;
					std::cout << line << "<--after if " << std::endl;
				}
			}
		}
//	}
	filer.close();
	filew.close();
}
