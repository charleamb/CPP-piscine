/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 14:32:33 by user42            #+#    #+#             */
/*   Updated: 2021/02/16 14:58:52 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int		main(int ac, char **av)
{
	std::string	buff;
	Phonebook	book[8];

	std::cout << "Hi, Welcome to the PhoneBook.\nType ADD to add a contact or SEARCH to search a contact.\nType EXIT to quit the program.\n" << std::endl;
	for (int i = 0; buff.compare("EXIT");)
	{
		getline(std::cin, buff);
		if (buff.compare("ADD") == 0)
		{
			if (i < 8)
				book[i++].ft_add();
			else
				std::cout << "\nBook Full" << std::endl;
		}
		else if (buff.compare("SEARCH") == 0)
			book[i].ft_search(book, i);
		if (buff.compare("EXIT"))
			std::cout << "\nType ADD to add a contact or SEARCH to search a contact.\nType EXIT to quit the program.\n" << std::endl;
	}
	return 0;
}
