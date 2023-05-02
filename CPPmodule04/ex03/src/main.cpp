/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:36:51 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/03 03:57:23 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>

/*void	testSource(void)
{
	announceTest("MateriaSource Test");
	//
	MateriaSource *source = new MateriaSource();
	source->learnMateria(NULL);
	delete source;
}*/
void tests(void)
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

    std::cout << "----------------------------------------" << std::endl;

    IMateriaSource* src2 = new MateriaSource();
    src2->learnMateria(new Ice());
    src2->learnMateria(new Cure());
    ICharacter* player1 = new Character("pacman");
    AMateria* tmp2;
    tmp2 = src2->createMateria("ice");
    player1->equip(tmp2);
    tmp2 = src2->createMateria("ice");
    player1->equip(tmp2);
    tmp2 = src2->createMateria("cure");
    player1->equip(tmp2);
    tmp2 = src2->createMateria("cure");
    player1->equip(tmp2);
    ICharacter* player2 = new Character("carl");
    // player2->equip(src2->createMateria("cure"));

    player1->use(0, *player2);
    player2->use(1, *player2);
    player1->use(2, *player2);
    player1->use(3, *player2);
    player1->use(4, *player2);
    player1->unequip(0);
    player1->unequip(1);
}

int	main(void)
{
	tests();

	return (0);
}
