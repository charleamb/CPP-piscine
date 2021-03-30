/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:40:00 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/22 09:37:29 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
//#include <random>
#include "Bureaucrat.hpp"
#include "Form.hpp"


class RobotomyRequestForm : public Form
{
	private:

							RobotomyRequestForm();
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &to_copy);

	public:

							RobotomyRequestForm(std::string const target);
							RobotomyRequestForm(const RobotomyRequestForm
							&to_copy);
		virtual void		action() const;
		virtual				~RobotomyRequestForm();
};
#endif
