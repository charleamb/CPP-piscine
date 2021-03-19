/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgilber <charleambg@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:01:45 by chgilber          #+#    #+#             */
/*   Updated: 2021/03/19 10:48:32 by chgilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << "my test below ===========" << std::endl;
	IMateriaSource *src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
//	ICharacter* chgilber = new Character("chgilber");
	Character *chgilber = new Character("chgilber");
	AMateria	*im;
	AMateria	*im2;
	AMateria	*im3;
	AMateria	*cm;
	im = src2->createMateria("ice");
	cm = src2->createMateria("cure");
	chgilber->equip(im);
	im2 = src2->createMateria("ice");
	chgilber->equip(im2);
	im3 = src2->createMateria("ice");
	chgilber->equip(cm);
	chgilber->equip(im3);
	ICharacter* bobi = new Character("bobi");
	std::cout << "xp Curemateria : "<< chgilber->getBag(2).getXP() << std::endl;
	chgilber->use(0, *bobi);
	chgilber->use(1, *bobi);
	chgilber->use(2, *bobi);
	chgilber->use(3, *bobi);
	std::cout << "xp Curemateria : "<< chgilber->getBag(2).getXP() << std::endl;
	chgilber->unequip(0);
	chgilber->use(1, *bobi);
	std::cout << "xp Curemateria : "<< chgilber->getBag(1).getXP() << std::endl;
	delete bobi;
	delete chgilber;
	delete src2;
	return 0;
}
