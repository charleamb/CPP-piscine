/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/22 09:36:11 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

					RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
					Form("RobotomyRequestForm", target, 72, 45)
{
}

					RobotomyRequestForm::RobotomyRequestForm
					(const RobotomyRequestForm &to_copy) : Form(to_copy)
{
}

void				RobotomyRequestForm::action() const
{
	static int		alea;

	alea++;
//	alea = std::rand()%5;

	if (alea % 2 == 0)
		std::cout << getName() << ": *Echec-ECHEC..ECHEC_eChec...*" << std::endl;
	else
	{
		std::cout << "**Bruit de perceuse**" << std::endl;
		std::cout << getName() << ": la cible " << getTarget() <<
		" a bien etait robotomyzeeeer!!!" << std::endl;
	}
}
			RobotomyRequestForm::~RobotomyRequestForm()
{
}
