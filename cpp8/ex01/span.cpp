/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:20:40 by chgilber          #+#    #+#             */
/*   Updated: 2021/04/05 10:49:28 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

		Span::Span(unsigned int N): _size(N)
{
}

		Span::Span(const Span &to_copy): _size(to_copy._size)
{
	*this = to_copy;
}
Span	&Span::operator=(const Span &to_copy)
{
			if (this != &to_copy)
				_size = to_copy._size;
			return (*this);
}


void	Span::addNumber(int numb)
{
		if (_v.size() >= _size)
			throw Toomuch();
		_v.push_back(numb);
}
void	Span::addNumber(int	start, int end)
{
	if (start > end)
		throw WrongArg();
	if (_v.size() + (end - start) >= _size)
		throw Toomuch();
	for (int i = start; i <= end; i++)
		_v.push_back(i);
}

int		Span::shortestSpan()
{
	int			min;

	if (_v.empty() == true)
		throw noSpan();
	min = 0;
	std::sort(_v.begin(), _v.end());
	for(size_t i = 0; i < _v.size(); i++)
	{
		if (std::abs(_v[i] - _v[i + 1]) < min || i == 0)
			min = std::abs(_v[i] - _v[i + 1]);
	}	
	return	min;
}

int		Span::longestSpan()
{
	int	tmp = maxSpan();
	int	tmp1 = minSpan();
	return tmp -tmp1;
}


int		Span::maxSpan()
{
	if (_v.empty() == true)
		throw noSpan();

	std::vector<int>::iterator it = _v.begin();
	int	tmp = *it;
	while (it != _v.end())
	{
			if (*it > tmp)
				tmp = *it;
		it++;
	}
	return tmp;
}
int		Span::minSpan()
{
	if (_v.empty() == true)
		throw noSpan();

	std::vector<int>::iterator it = _v.begin();
	int	tmp = *it;
	while (it != _v.end())
	{
			if (*it < tmp)
			{
				tmp = *it;
			}
		it++;
	}
	return tmp;
}



		Span::~Span()
{
}
