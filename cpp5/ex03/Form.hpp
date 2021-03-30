/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:40:00 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/21 10:31:01 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

			std::string const	_name;
			std::string const	_target;
			int	const			_grade_sign;
			int	const			_grade_exc;
			bool				_sign;
								Form();

	public:

									Form(std::string const name, int gs, int ge);
									Form(std::string const name,
									std::string const target, int gs, int ge);
									Form(const Form &to_copy);
		Form						&operator=(const Form &to_copy);
		virtual bool				BeSigned(Bureaucrat const &B);
		virtual bool				execute(Bureaucrat const &B) const;
		virtual std::string const	&getName() const;
		virtual std::string const	&getTarget() const;
		virtual int	const			&getGrade_sign() const;
		virtual int	const			&getGrade_exc() const;
		virtual bool const			&getSign() const;
		virtual void				action() const = 0;
		class GradeTooLowException: public std::exception
		{
			virtual const char*		what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual const char*		what() const throw();
		};
		class FormNotSigned: public std::exception
		{
			virtual const char*		what() const throw();
		};

		virtual						~Form();

};
		std::ostream				&operator<<(std::ostream &out, Form &b);
#endif
