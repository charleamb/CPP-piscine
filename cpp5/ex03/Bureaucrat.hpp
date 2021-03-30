/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:40:00 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/21 10:04:08 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:

			std::string const	_name;
			int					_grade;

	public:
									Bureaucrat();
									Bureaucrat(std::string const name, int g);
									Bureaucrat(const Bureaucrat &to_copy);
		Bureaucrat					&operator=(const Bureaucrat &to_copy);
		virtual std::string const	&getName() const;
		virtual int	const			&getGrade() const;
		virtual void				Promotion();
		virtual void				Relegation();
		void						SignForm(Form &f);
		void						executeForm(Form const &f);
		class GradeTooLowException: public std::exception
		{
			virtual const char*		what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual const char*		what() const throw();
		};
		virtual						~Bureaucrat();

};
		std::ostream				&operator<<(std::ostream &out, Bureaucrat &b);
#endif
