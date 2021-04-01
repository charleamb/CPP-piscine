/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:53:58 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/30 15:51:03 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main(void)
{
	char	tab[] = "plop";
	int		tabi[] = {1 , 2 , 3 , 4};
	int		len = 4;
	std::cout << "iter with char array" << std::endl;
	iter(tab, len, printer);
	std::cout << "iter with int array" << std::endl;
	iter(tabi, len, printer);
}
