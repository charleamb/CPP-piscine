/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 08:24:02 by chgilber          #+#    #+#             */
/*   Updated: 2021/04/04 08:25:57 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:

					MutantStack(): std::stack<T>(){};
					MutantStack(const MutantStack &tc) :std::stack<T>(tc){};
					~MutantStack(){};
	MutantStack		&operator=(const MutantStack &tc) {
					return (std::stack<T>::operator=(tc));}
					typedef typename std::stack<T>::container_type::iterator iterator;
					typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	iterator		begin(){return std::stack<T>::c.begin();}
	reverse_iterator		rbegin(){return std::stack<T>::c.rbegin();}
	iterator		end(){return std::stack<T>::c.end();}
	reverse_iterator		rend(){return std::stack<T>::c.rend();}
};

#endif
