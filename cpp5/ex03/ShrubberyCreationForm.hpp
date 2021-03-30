/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:40:00 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/21 10:19:50 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"


class ShrubberyCreationForm : public Form
{
	private:

							ShrubberyCreationForm();
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &to_copy);

	public:

							ShrubberyCreationForm(std::string const target);
							ShrubberyCreationForm(const ShrubberyCreationForm
							&to_copy);
		virtual void		action() const;
		virtual				~ShrubberyCreationForm();
};
#endif
