/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:36:51 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/03 16:14:48 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>

void test01(void)
{
	announceTestCategory("SUBJECT TEST");
	announceTest("The one from the exercise");
	IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* alice = new Character("me");
    AMateria* tmp01;
    tmp01 = src->createMateria("ice");
    alice->equip(tmp01);
    tmp01 = src->createMateria("cure");
    alice->equip(tmp01);
    ICharacter* bob = new Character("Bob");
    alice->use(0, *bob);
    alice->use(1, *bob);
    delete bob;
    delete alice;
    delete src;

	pressAnyKey();

	announceTestCategory("MY TEST");
	announceTest("Materia Sources");
	IMateriaSource* src2 = new MateriaSource();
    src2->learnMateria(new Ice());
    src2->learnMateria(new Cure());
    ICharacter* player1 = new Character("Alice");
    AMateria* tmp2;
    tmp2 = src2->createMateria("ice");
    player1->equip(tmp2);
    tmp2 = src2->createMateria("ice");
    player1->equip(tmp2);
    tmp2 = src2->createMateria("cure");
    player1->equip(tmp2);
    tmp2 = src2->createMateria("cure");
    player1->equip(tmp2);
    ICharacter* player2 = new Character("Bob");

	announceTest("Time for some action");
    player1->use(0, *player2);
    player1->use(1, *player2);
    player1->use(2, *player2);
    player1->use(3, *player2);
	announce("Let's try and get Alice to use something from inventory slot 5");
	player1->use(4, *player2);
	announce("OK, let's uneqip everything from Alice");
    player1->unequip(0);
    player1->unequip(1);
    player1->unequip(2);
    player1->unequip(3);
	
	announceTest("Delete everything and we're done!");
	delete player2;
	delete player1;
	delete src2;

	pressAnyKey();
}

int	main(void)
{
	test01();

	return (0);
}
