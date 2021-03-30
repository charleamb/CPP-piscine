/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:32:23 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/25 13:18:30 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

Data	*deserialize(void	*raw)
{
	std::cout << "===Deserialize call===" << std::endl;
	return reinterpret_cast<struct Data*>(raw);
}
void	*serialize(void)
{
	struct Data *dat = new struct Data;
	std::srand(std::time(NULL));
	char		rdm[] = "abcdefghijklmnopqrstuvwxyz0123456789";
	char		*str1 = new char[8];
	char		*str2 = new char[8];
	int		i, j;
	
	i = 0;
	while (i < 8)
	{
		str1[i] = rdm[rand() % (sizeof(rdm) - 1)];
		i++;
	}
		j = 0;
	while (j < 8)
	{
		str2[j] = rdm[rand() % (sizeof(rdm) - 1)];
		j++;
	}
	dat->s1 = str1;
	dat->n = rand() % 1000;
	dat->s2 = str2;
	delete[] str1;
	delete[] str2;
	std::cout << "===Serialize function==" << std::endl;
	std::cout << "random str1 : " << dat->s1 << std::endl;
	std::cout << "random int : " << dat->n << std::endl;
	std::cout << "random str2 : " << dat->s2 << std::endl;
	void * serial_dat = reinterpret_cast<void *>(dat);
	return serial_dat;
}

int		main(void)
{
	void	*tmp;
	struct Data *seria;


	tmp = serialize();
	std::cout << "===========Main========" << std::endl;
	std::cout << "serialized data pointer: " << tmp << std::endl;
	seria = deserialize(tmp);
	std::cout << "===========Main========" << std::endl;
	std::cout << "str1 : " << seria->s1 << std::endl;
	std::cout << "int  : " << seria->n << std::endl;
	std::cout << "str2 : " << seria->s2 << std::endl;
	std::cout << "======================" << std::endl;
	delete seria;
	return 0;
}

