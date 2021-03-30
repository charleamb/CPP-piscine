/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:40:00 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/20 12:00:55 by chgilber         ###   ########.fr       */
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
			int	const			_grade_sign;
			int	const			_grade_exc;
			bool				_sign;
								Form();

	public:

									Form(std::string const name, int gs, int ge);
									Form(const Form &to_copy);
		Form						&operator=(const Form &to_copy);
		virtual bool				BeSigned(Bureaucrat const &B);
		virtual std::string const	&getName() const;
		virtual int	const			&getGrade_sign() const;
		virtual int	const			&getGrade_exc() const;
		virtual bool const			&getSign() const;
		class GradeTooLowException: public std::exception
		{
			virtual const char*		what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual const char*		what() const throw();
		};
		virtual						~Form();

};
		std::ostream				&operator<<(std::ostream &out, Form &b);
#endif
