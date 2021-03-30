/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:13:55 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/22 09:39:55 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int		main()
{
//	srand(time(NULL));
	Bureaucrat				timmy("timmy", 140);
	Bureaucrat				corrector("corrector", 40);
	Bureaucrat				jogo("jogo", 1);
	Bureaucrat				moi("moi", 70);
	Bureaucrat				ichigo("ichigo", 15);


	std::cout << timmy << jogo << corrector << ichigo << moi << std::endl;
	ShrubberyCreationForm	s("Rond_point");
	ShrubberyCreationForm	ctp("Chez_ton_papa");
	PresidentialPardonForm	ppf("misoguy");
	RobotomyRequestForm		kum("kuma");

	std::cout << s << ctp << ppf << kum;
	jogo.executeForm(s);
	timmy.SignForm(s);
	timmy.executeForm(s);
	timmy.SignForm(ctp);
	timmy.SignForm(ppf);
	timmy.SignForm(kum);
	moi.SignForm(ppf);
	moi.SignForm(kum);
	moi.executeForm(kum);
	corrector.executeForm(kum);
	corrector.executeForm(kum);
	corrector.executeForm(kum);
	corrector.executeForm(kum);
	corrector.executeForm(kum);
	moi.executeForm(s);
	moi.executeForm(ctp);
	ichigo.SignForm(ppf);
	ichigo.executeForm(ppf);
	jogo.executeForm(ppf);
	return 0;
}
