/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:13:55 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/20 17:11:22 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat timmy("timmy", 140);
	Bureaucrat huitre("huitre", 25000);
	Bureaucrat jogo("jogo", 1);
	Bureaucrat sukana("sukana", -150);
	Bureaucrat ichigo("ichigo", 15);


	std::cout << timmy << jogo << sukana << ichigo << huitre << std::endl;
	jogo.Relegation();
	std::cout << jogo;
	jogo.Promotion();
	std::cout << jogo;
	jogo.Promotion();
	std::cout << jogo;
	jogo.Promotion();
	std::cout << jogo;
	timmy.Relegation();
	timmy.Relegation();
	timmy.Relegation();
	timmy.Relegation();
	std::cout << timmy;
	timmy.Relegation();
	timmy.Relegation();
	timmy.Relegation();
	std::cout << timmy;
	timmy.Relegation();
	timmy.Relegation();
	timmy.Relegation();
	timmy.Relegation();
	timmy.Relegation();
	timmy.Relegation();
	timmy.Relegation();
	std::cout << timmy;
	timmy.Relegation();
	timmy.Relegation();
	timmy.Relegation();
	timmy.Relegation();
	timmy.Relegation();
	timmy.Promotion();
	std::cout << timmy;
	timmy.Promotion();
	timmy.Promotion();
	timmy.Promotion();
	timmy.Promotion();
	timmy.Promotion();
	timmy.Promotion();
	std::cout << timmy;
	std::cout << "Test Ex01----------------" << std::endl;
	Form	a("a", 120 , 100);
	Form	b("b", 15 , 5);
	Form	d("d", 1 , 1);
	Form	c("c", 75 , 25);

	std::cout << a << b << c << d;
	timmy.SignForm(a);
	timmy.SignForm(b);
	timmy.SignForm(c);
	timmy.SignForm(d);
	std::cout << a << b << c << d;
	ichigo.SignForm(a);
	ichigo.SignForm(b);
	ichigo.SignForm(c);
	ichigo.SignForm(d);
	std::cout << a << b << c << d;
	jogo.SignForm(a);
	jogo.SignForm(b);
	jogo.SignForm(c);
	jogo.SignForm(d);
	std::cout << d;
	return 0;
}
