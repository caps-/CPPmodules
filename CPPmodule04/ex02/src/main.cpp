/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:14:17 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 13:26:09 by pwhittin         ###   ########.fr       */
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
	Cat *cat = new Cat();

	announce("Giving them ideas");
	//ideas & brain shit
	cat->getBrain()->setIdea(0, "I should jump on to this bench");
	cat->getBrain()->setIdea(1, "that glass is so close to the edge");
	cat->getBrain()->setIdea(2, "maybe if I just give it a little nudge ..");
	cat->getBrain()->setIdea(3, "it broke and I am satisfied");
	announceIdea("cat", cat->getBrain()->getIdea(0));
	announceIdea("cat", cat->getBrain()->getIdea(1));
	announceIdea("cat", cat->getBrain()->getIdea(2));
	announceIdea("cat", cat->getBrain()->getIdea(3));
	announce("Copying copyCat");
	Cat *copyCat01 = new Cat(*cat);
	announceIdea("copyCat01", copyCat01->getBrain()->getIdea(0));
	announceIdea("copyCat01", copyCat01->getBrain()->getIdea(1));
	announceIdea("copyCat01", copyCat01->getBrain()->getIdea(2));
	announceIdea("copyCat01", copyCat01->getBrain()->getIdea(3));

	announce("OK, let's give the original cat some new ideas");
	cat->getBrain()->setIdea(0, "hmm what do I wanna do now?");
	cat->getBrain()->setIdea(1, "I could probably fit myself behind the fridge");
	cat->getBrain()->setIdea(2, "or maybe get behind the telly");
	cat->getBrain()->setIdea(3, "nah I'll just stare at the wall for a while");
	announceIdea("cat", cat->getBrain()->getIdea(0));
	announceIdea("cat", cat->getBrain()->getIdea(1));
	announceIdea("cat", cat->getBrain()->getIdea(2));
	announceIdea("cat", cat->getBrain()->getIdea(3));
	announce("and now copyCat01 should still have the same ideas as before");
	announceIdea("copyCat01", copyCat01->getBrain()->getIdea(0));
	announceIdea("copyCat01", copyCat01->getBrain()->getIdea(1));
	announceIdea("copyCat01", copyCat01->getBrain()->getIdea(2));
	announceIdea("copyCat01", copyCat01->getBrain()->getIdea(3));
	announce("Now let's give give copyCat01 the ideas from the original cat");
	*copyCat01 = *cat;
	announceIdea("copyCat01", copyCat01->getBrain()->getIdea(0));
	announceIdea("copyCat01", copyCat01->getBrain()->getIdea(1));
	announceIdea("copyCat01", copyCat01->getBrain()->getIdea(2));
	announceIdea("copyCat01", copyCat01->getBrain()->getIdea(3));

	announce("Deleting all the animals");
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
