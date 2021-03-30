/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:29:08 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/22 18:25:23 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

					Bureaucrat::Bureaucrat() : _name("unnamed"), _grade(150)
{
}
					Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	try
	{
		if (grade > 150)
		{
			_grade = 150;
			throw GradeTooLowException();
		}
		else if (grade < 1)
		{
			_grade = 1;
			throw GradeTooHighException();
		}
		_grade = grade;
	}
	catch(std::exception &e)
	{
		std::cerr << "Construction errror: " << e.what() << std::endl;
	}
}

					Bureaucrat::Bureaucrat(const Bureaucrat &to_copy) : _name(to_copy._name)
{
	try
	{
		if (to_copy._grade > 150)
			throw GradeTooLowException();
		if (to_copy._grade < 1)
			throw GradeTooHighException();
		_grade = to_copy._grade;
	}
	catch(std::exception &e)
	{
		std::cerr << "Assignation error: " << e.what() << std::endl;
	}
}

Bureaucrat			&Bureaucrat::operator=(const Bureaucrat &to_copy)
{
	try
	{
		if (to_copy._grade > 150)
			throw GradeTooLowException();
		if (to_copy._grade < 1)
			throw GradeTooHighException();
		_grade = to_copy._grade;
	}
	catch(std::exception &e)
	{
		std::cerr << "Copy error: " << e.what() << std::endl;
	}
	return *this;
}

std::string const	&Bureaucrat::getName() const
{
	return _name;
}

int const			&Bureaucrat::getGrade() const
{
	return _grade;
}
void			Bureaucrat::Promotion()
{
	try
	{
		if (_grade -1 < 1)
			throw GradeTooHighException();
		else
			_grade--;
	}
	catch(std::exception &e)
	{
		std::cerr << "Promotion error: " << e.what() << std::endl;
	}
}

void				Bureaucrat::Relegation()
{
	try
	{
		if (_grade + 1 > 150)
			throw GradeTooLowException();
		else
			_grade++;
	}
	catch(std::exception &e)
	{
		std::cerr << "Relegation error: " << e.what() << std::endl;
	}
}

void				Bureaucrat::SignForm(Form &f)
{
		if (f.getSign())
			std::cout << f.getName() << " deja signer." << std::endl;
		else if (f.BeSigned(*this) == true)
			std::cout << _name << " signe " << f.getName() << std::endl;
}
void				Bureaucrat::executeForm(Form const &f)
{
		f.execute(*this);
}

const char			*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low exception";
}

const char			*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high exception";
}

std::ostream &operator<<(std::ostream &out,  Bureaucrat &b)
{
		return out << b.getName() << " est un Bureaucrat grade: " << b.getGrade() << "." << std::endl;
}

			Bureaucrat::~Bureaucrat()
{
}
