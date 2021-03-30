/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:13:55 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/23 10:45:21 by chgilber         ###   ########.fr       */
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


	std::cout << "bonjours" << 15;
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
	return 0;
}
