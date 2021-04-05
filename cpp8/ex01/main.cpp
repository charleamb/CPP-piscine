/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:23:42 by chgilber          #+#    #+#             */
/*   Updated: 2021/04/03 08:22:50 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
int	mainoffi()
{
	Span sp = Span(5);
	
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}

int	main(void)
{
	Span	vecto(30);
	Span	bigboivecto(150700);
	Span	vectovid(42);

	try
	{
		mainoffi();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		vecto.addNumber(5);
		vecto.addNumber(157 , 169);
		vecto.addNumber(42);
		vecto.addNumber(15 , 24);
		std::cout << vecto.shortestSpan() << std::endl;
		std::cout << vecto.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bigboivecto.addNumber(2000021);
		bigboivecto.addNumber(1021, 15074);
		bigboivecto.addNumber(4242);
		std::cout << bigboivecto.shortestSpan() << std::endl;
		std::cout << bigboivecto.longestSpan() << std::endl;
		std::cout << vectovid.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
