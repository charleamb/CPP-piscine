/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:02:14 by chgilber          #+#    #+#             */
/*   Updated: 2021/04/01 13:32:10 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstring>
#include <iostream>

template <class T>
class Array
{
	private:
		T				*_type;
		T				*_tab;
		unsigned int	_n;
	public:
		
		Array()
		{
			_type = new T();
			_n = 0;
			_tab = new T[_n];
		}

		Array(unsigned int n)
		{
			_type = new T();
			_tab = new T[n];
			_n = n;
			for ( unsigned int i = 0; i < _n; i++)
				_tab[i] =  *_type;
		}

		Array(const Array &to_copy): _type(new T()), _tab(new T[0]), _n(0)
		{
		*this = to_copy;
		}

		Array	&operator=(const Array &to_copy)
		{
			if (this != &to_copy)
			{
				delete[] _tab;
				_n = to_copy._n;
				_type = to_copy._type;
				_tab = new T[_n];
				for (unsigned int i = 0; i < _n; i++)
					_tab[i] = to_copy._tab[i];
			}
			return (*this);
		}

		unsigned int	size() const
		{
			return _n;
		}

		~Array()
		{
			delete[] _tab;
			delete _type;
		}

		class Outrange: public std::exception
		{
		public:
			Outrange() throw()
			{
				return ;
			}
			Outrange(const Outrange &src) throw();
			virtual ~Outrange() throw ()
			{
				return ;
			}
			virtual const char*		what() const throw()
			{
				return "Outrange of Array";
			}
		};

		T				&operator[](unsigned int idx)
		{
			if (idx >= _n)
				throw Outrange();
			return _tab[idx];
		}

};
	template <typename T>
std::ostream				&operator<<(std::ostream &out, Array<T> &a)
{
	return out << a;
}

#endif
