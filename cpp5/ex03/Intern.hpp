/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:40:00 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/22 17:49:46 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

typedef struct			s_formi
{
		Form			*(*f)(std::string const target);
		std::string		forme;
}						t_formi;
class Intern
{

	public:
							Intern();
							Intern(const Intern &to_copy);
		Intern				&operator=(const Intern &to_copy);
		static Form			*shrub(std::string const target);
		static Form			*robot(std::string const target);
		static Form			*presi(std::string const target);
		Form				*makeForm(std::string const form,
									std::string const target) const;
		virtual				~Intern();
};
#endif
