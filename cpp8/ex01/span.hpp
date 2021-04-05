/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:36:41 by chgilber          #+#    #+#             */
/*   Updated: 2021/04/05 10:48:47 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <cmath>
#include <algorithm>

class Span
{
	private:
		std::vector<int>	_v;
		unsigned int		_size;
			Span(){
			}
	public:

			Span(unsigned int n);
			Span(const Span &to_copy);
			~Span();
	Span	&operator=(const Span &to_copy);
	void	addNumber(int	numb);
	void	addNumber(int	start, int end);
	int		shortestSpan();
	int		longestSpan();
	int		minSpan();
	int		maxSpan();
		class Toomuch: public std::exception
		{
		public:
			Toomuch() throw()
			{
				return ;
			}
			Toomuch(const Toomuch &src) throw();
			virtual ~Toomuch() throw ()
			{
				return ;
			}
			virtual const char*		what() const throw()
			{
				return "Too much value in vect Span";
			}
		};
		class WrongArg: public std::exception
		{
		public:
			WrongArg() throw()
			{
				return ;
			}
			WrongArg(const WrongArg &src) throw();
			virtual ~WrongArg() throw ()
			{
				return ;
			}
			virtual const char*		what() const throw()
			{
				return "Wrong Argurment for add(start, end)";
			}
		};
		class noSpan: public std::exception
		{
		public:
			noSpan() throw()
			{
				return ;
			}
			noSpan(const noSpan &src) throw();
			virtual ~noSpan() throw ()
			{
				return ;
			}
			virtual const char*		what() const throw()
			{
				return "No Span";
			}
		};

};

#endif
