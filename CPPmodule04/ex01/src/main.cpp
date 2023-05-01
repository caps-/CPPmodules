/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:14:17 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 13:07:36 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Colours.hpp"
#include "Messages.hpp"

void	animalTesting(void)
{
	announceTest("ARRAY TESTS");
	announce("Constructing Animal Array");
	//array testing
	Animal *animal[6];
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
            animal[i] = new Cat();
        else
            animal[i] = new Dog();
    }
	
	announce("Noises!");
	for (int i = 0; i < 6; i++)
		animal[i]->makeSound();

	announceTest("COPY & BRAIN TESTING");
	announce("Copying Cat");
	//copy + brain testing
	Cat *copyCat = new Cat();

	announce("Giving them ideas");
	//ideas & brain shit
	copyCat->getBrain()->setIdea(0, "I should jump on to this bench");
	copyCat->getBrain()->setIdea(1, "that glass is so close to the edge");
	copyCat->getBrain()->setIdea(2, "maybe if I just give it a little nudge ..");
	announceIdea("Copy Cat", copyCat->getBrain()->getIdea(0));
	announceIdea("Copy Cat", copyCat->getBrain()->getIdea(1));
	announceIdea("Copy Cat", copyCat->getBrain()->getIdea(2));
	announce("Copying copyCat");
/*	Cat *copyCat02 = new Cat(*copyCat);
	announceIdea("Copy Cat", copyCat02->getBrain()->getIdea(0));
	announceIdea("Copy Cat", copyCat02->getBrain()->getIdea(1));
	announceIdea("Copy Cat", copyCat02->getBrain()->getIdea(2));*/

	announce("Deleting");
	//delete the animals	
	for (int i = 0; i < 6; i++)
		delete animal[i];
	bigAssLine();
}

int	main(void)
{
	animalTesting();
	return (0);
}
