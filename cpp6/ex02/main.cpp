/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:00:43 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/30 10:57:11 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.hpp"
#include	<sstream>

Base	*generate(void)
{
	std::srand(std::time(NULL));
	int		alea = rand() % 3;


	std::cout << "==The class generate is==" << std::endl;
	if (alea == 0)
	{
		std::cout << "A" << std::endl;
		return  new A;
	}
	if (alea == 1)
	{
		std::cout << "B" << std::endl;
		return  new B;
	}
		std::cout << "C" << std::endl;
	return  new C;
}
void	identify_from_pointer(Base	*letter)
{
	A *a = dynamic_cast<A*>(letter);
	B *b = dynamic_cast<B*>(letter);
	C *c = dynamic_cast<C*>(letter);

	if (a != NULL)
		std::cout << "A" << std::endl;
	if (b != NULL)
		std::cout << "B" << std::endl;
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base	&letter)
{
	identify_from_pointer(&letter);
}


int		main(void)
{
	Base *letter = generate();
	std::cout << "==Call the identifer * ==" << std::endl;
	identify_from_pointer(letter);
	std::cout << "==Call the identifer & ==" << std::endl;
	identify_from_reference(*letter);
	return 0;
}
