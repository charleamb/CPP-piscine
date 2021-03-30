/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/22 09:37:59 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

					PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
					Form("PresidentialPardonForm", target, 25, 5)
{
}

					PresidentialPardonForm::PresidentialPardonForm
					(const PresidentialPardonForm &to_copy) : Form(to_copy)
{
}

void				PresidentialPardonForm::action() const
{
		std::cout << getTarget() << " a été pardonnée par Zafod Beeblebrox."
		<< std::endl;
}

			PresidentialPardonForm::~PresidentialPardonForm()
{
}
