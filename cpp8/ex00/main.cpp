/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 11:41:24 by chgilber          #+#    #+#             */
/*   Updated: 2021/04/01 11:44:01 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	myv;

	for(int i = 0; i < 5; i++)
		myv.push_back(i*i);
	easyfind(myv, 9);
	return 0;
}
