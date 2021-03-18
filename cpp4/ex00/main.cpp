/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 10:27:56 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/10 11:01:18 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	std::cout << "-------------" << std::endl;
	Sorcerer	lulu("Lulu", "El Support");
	Victim		ez("Ezreal");

	std::cout << ez;
	lulu.polymorph(ez);
	return 0;
}
