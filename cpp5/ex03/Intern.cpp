/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/22 17:53:12 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

			Intern::Intern()
{
}

			Intern::Intern(const Intern &to_copy)
{
	(void)to_copy;
}

Intern		&Intern::operator=(const Intern &to_copy)
{
	(void)to_copy;
	return *this;
}

Form		*Intern::shrub(std::string const target)
{
	return new ShrubberyCreationForm(target);
}
Form		*Intern::presi(std::string const target)
{
	return new PresidentialPardonForm(target);
}
Form		*Intern::robot(std::string const target)
{
	return new RobotomyRequestForm(target);
}

Form		*Intern::makeForm(std::string const form, std::string const target) const
{
	t_formi formi[3];

	formi[0].f =  &Intern::shrub;
	formi[0].forme = "shrubbery creation";
	formi[1].f = &Intern::presi;
	formi[1].forme = "presidential pardon";
	formi[2].f = &Intern::robot;
	formi[2].forme = "robotomy request";

	int idx = 0;
	while (idx < 3)
	{
		if (formi[idx].forme == form)
		{
			std::cout << "Intern create " << form <<  std::endl;
			return formi[idx].f(target);
		}
		idx++;
	}
	std::cout << "Intern cant create " << form << " its bullshit :/" <<
	std::endl;
	return NULL;
}

			Intern::~Intern()
{
}
