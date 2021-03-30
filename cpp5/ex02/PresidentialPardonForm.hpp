/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:40:00 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/21 11:06:15 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"


class PresidentialPardonForm : public Form
{
	private:

							PresidentialPardonForm();
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &to_copy);

	public:

							PresidentialPardonForm(std::string const target);
							PresidentialPardonForm(const PresidentialPardonForm
							&to_copy);
		virtual void		action() const;
		virtual				~PresidentialPardonForm();
};
#endif
