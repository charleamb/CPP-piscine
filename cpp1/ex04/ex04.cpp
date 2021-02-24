/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:25:22 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/24 12:38:29 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	hi;
	std::string	*hit;

	hi = "HI THIS IS BRAIN";
	hit = &hi;
	std::cout << *hit << std::endl;
	std::cout << &hi << std::endl;
}
