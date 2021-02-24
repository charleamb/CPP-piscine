/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:29:44 by chgilber          #+#    #+#             */
/*   Updated: 2021/02/18 17:31:37 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Pony {

	private:

		std::string _name;
		std::string _race;
		std::string _couleur;
		int _taille;
		int _poids;
		int _age;

	public:
		void	whopony();
		void	initheap();
		void	initstack();
		void	ponyOnTheHeap();
		void	ponyOnTheStack();
};
