/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:28:18 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/17 10:05:28 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Phonebook::ft_add()
{
	std::cout << "What's your name?" << std::endl;
	getline(std::cin, this->_first_name);
	std::cout << "What's your last name?" << std::endl;
	getline(std::cin, this->_last_name);
	std::cout << "What's your nick name?" << std::endl;
	getline(std::cin, this->_nick_name);
	std::cout << "What's your login?" << std::endl;
	getline(std::cin, this->_login);
	std::cout << "What's your adress?" << std::endl;
	getline(std::cin, this->_adress);
	std::cout << "What's your email?" << std::endl;
	getline(std::cin, this->_email);
	std::cout << "What's your number?" << std::endl;
	getline(std::cin, this->_number);
	std::cout << "What's your birthday date?" << std::endl;
	getline(std::cin, this->_birthday);
	std::cout << "What's your favorite meal?" << std::endl;
	getline(std::cin, this->_favorite_meal);
	std::cout << "What's your underwear color?" << std::endl;
	getline(std::cin, this->_underwear_color);
	std::cout << "What's your darkest secret" << std::endl;
	getline(std::cin, this->_darkest_secret);
}

void	ft_print_data(std::string toPrint)
{

	if (toPrint.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << toPrint[i];
		std::cout << '.' << " | ";
	}
	else
	{
		int i = 10 - toPrint.length();
		while (i-- > 0)
			std::cout << ' ';
		std::cout << toPrint << " | ";
	}
}
void	Phonebook::ft_print_user(Phonebook book)
{
	std::cout << "First name : " <<  book._first_name << std::endl;
	std::cout << "Last name : " <<  book._last_name << std::endl;
	std::cout << "nick name : " <<  book._nick_name << std::endl;
	std::cout << "login : " <<  book._login << std::endl;
	std::cout << "adress : " <<  book._adress << std::endl;
	std::cout << "email : " <<  book._email << std::endl;
	std::cout << "number : " <<  book._number << std::endl;
	std::cout << "birthday : " <<  book._birthday << std::endl;
	std::cout << "favorite meal : " <<  book._favorite_meal << std::endl;
	std::cout << "underwear color : " <<  book._underwear_color << std::endl;
	std::cout << "Darkest secret : " <<  book._darkest_secret << std::endl;
}
void	Phonebook::ft_search(Phonebook book[], const int i)
{
	int			k;
	std::string	buff;
	Phonebook	tmp[8];
	
	k = 0;
	for (int j = 0; j < i ; j++, k++)
	{
		std::cout << k << "|";
		ft_print_data(book[j]._first_name);
		ft_print_data(book[j]._last_name);
		ft_print_data(book[j]._nick_name);
		std::cout << "\n";
		tmp[k] = book[j];
	}
	if (k-- > 0)
	{
		while (buff.size() != 1 || buff[0] > k + '0' || buff[0] < '0')
		{
			std::cout << "Type the INDEX of the contact you want to read (0-7).\n";
			getline(std::cin, buff);
			if (buff.size() == 1 && buff[0] <= k + '0' && buff[0] >= '0')
			{
				ft_print_user(tmp[buff[0] - '0']);
				return ;
			}
			else
				std::cout << "Please enter a right INDEX\n";
		}
	}
}
