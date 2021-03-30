/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/21 10:29:43 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

					ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
					Form("ShrubberyCreationForm", target, 145, 137)
{
}

					ShrubberyCreationForm::ShrubberyCreationForm
					(const ShrubberyCreationForm &to_copy) : Form(to_copy)
{
}

static std::string TREES =
    "            ,@@@@@@@,\n"
    "    ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
    " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
    ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
    "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
    "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
    "`&%\\ ` /%&'    |.|    _   \\ '|8'\n"
    "    |o|        | |   ( )   | |\n"
    "    |.|        | |    |    | |\n"
    " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";


void				ShrubberyCreationForm::action() const
{
	std::fstream	filew;

	filew.open((getTarget() + "_shrubbery").c_str(), std::fstream::out);
	if (!filew)
	{
		filew.close();
		std::cout << "I/O Error, creation tree." << std::endl;
	}
	filew << TREES;
	std::cout << "Tree will grow here, pretty nice" << std::endl;
}

			ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
