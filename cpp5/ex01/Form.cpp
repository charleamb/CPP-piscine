/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/20 17:10:51 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

					Form::Form(std::string const name, int gs, int ge) :
					_name(name), _grade_sign(gs), _grade_exc(ge), _sign(0)
{
	try
	{
		if (gs > 150 || ge > 150)
			throw GradeTooLowException();
		else if (gs < 1 || ge < 1)
			throw GradeTooHighException();
	}
	catch(std::exception &e)
	{
		std::cerr << "Construction errror: " << e.what() << std::endl;
	}
}

					Form::Form(const Form &to_copy) : _name(to_copy._name), 
			_grade_sign(to_copy._grade_sign), _grade_exc(to_copy._grade_exc)
{
	_sign = to_copy._sign;
	try
	{
		if (to_copy._grade_sign > 150 || to_copy._grade_exc > 150)
			throw GradeTooLowException();
		if (to_copy._grade_sign < 1 || to_copy._grade_exc < 1)
			throw GradeTooHighException();
	}
	catch(std::exception &e)
	{
		std::cerr << "Assignation error: " << e.what() << std::endl;
	}
}

Form			&Form::operator=(const Form &to_copy)
{
	_sign = to_copy._sign;
	return *this;
}

std::string const	&Form::getName() const
{
	return _name;
}
int const			&Form::getGrade_sign() const
{
	return _grade_sign;
}
int const			&Form::getGrade_exc() const
{
	return _grade_exc;
}
bool const				&Form::getSign() const
{
	return _sign;
}

bool				Form::BeSigned(const Bureaucrat &b)
{
	try
	{
		if (b.getGrade() > _grade_sign)
			throw GradeTooLowException();
		else
			_sign = 1;
	}
	catch(std::exception &e)
	{
		std::cerr << b.getName() << " ne peut signer " << _name << " car: " << e.what() << std::endl;
	}
	return _sign;
}


const char			*Form::GradeTooLowException::what() const throw()
{
	return "*Grade too low for this Form*";
}

const char			*Form::GradeTooHighException::what() const throw()
{
	return "*Grade too high for this Form*";
}

std::ostream &operator<<(std::ostream &out,  Form &b)
{
		return out << b.getName() << " Form est " << (b.getSign() ? "signer" : "pas encore signer") << ", le grade "  << b.getGrade_sign() << " est necessaire et peut etre executer par un grade: " << b.getGrade_exc() << "." << std::endl;
}
			Form::~Form()
{
}
