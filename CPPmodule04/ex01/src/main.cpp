/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:14:17 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 15:26:20 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Colours.hpp"
#include "Messages.hpp"

int	animalTesting(void)
{
	//let's clear the screen
	system("clear");
	announceTestType("ANIMAL");
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
	std::cout << "\nPress any key to continue .." << std::endl;
	system("read");
	
	announce("Noises!");
	for (int i = 0; i < 6; i++)
		animal[i]->makeSound();
	std::cout << "\nPress any key to continue .." << std::endl;
	system("read");

	announce("Deleting all the animals");
	//delete the animals	
	for (int i = 0; i < 6; i++)
		delete animal[i];
	bigAssLine();
	std::cout << "\nPress any key to continue .." << std::endl;
	system("read");

	return (0);
}

int	catTest(void)
{
	announceTestType("CAT");
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
	std::cout << "\nPress any key to continue .." << std::endl;
	system("read");

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
	std::cout << "\nPress any key to continue .." << std::endl;
	system("read");
	announce("Deleting the cats");
	delete cat;
	delete copyCat01;

	std::cout << "\nPress any key to continue .." << std::endl;
	system("read");

	return (0);
}

int	dogTest(void)
{
	announceTestType("DOG");
	announceTest("COPY & BRAIN TESTING");
	announce("Copying Dog");
	//copy + brain testing
	Dog *dog = new Dog();

	announce("Giving them ideas");
	//ideas & brain shit
	dog->getBrain()->setIdea(0, "Walk?");
	dog->getBrain()->setIdea(1, "HUMAN!");
	dog->getBrain()->setIdea(2, "I must tear open this cereal box with my teeth!");
	dog->getBrain()->setIdea(3, "I must also pretend I didn't do it");
	announceIdea("dog", dog->getBrain()->getIdea(0));
	announceIdea("dog", dog->getBrain()->getIdea(1));
	announceIdea("dog", dog->getBrain()->getIdea(2));
	announceIdea("dog", dog->getBrain()->getIdea(3));
	announce("Copying copyDog");
	Dog *copyDog01 = new Dog(*dog);
	announceIdea("copyDog01", copyDog01->getBrain()->getIdea(0));
	announceIdea("copyDog01", copyDog01->getBrain()->getIdea(1));
	announceIdea("copyDog01", copyDog01->getBrain()->getIdea(2));
	announceIdea("copyDog01", copyDog01->getBrain()->getIdea(3));
	std::cout << "\nPress any key to continue .." << std::endl;
	system("read");

	announce("OK, let's give the original dog some new ideas");
	dog->getBrain()->setIdea(0, "OMG walk! I'm gunna go get my own leash!");
	dog->getBrain()->setIdea(1, "ANOTHER HUMAN OMG!");
	dog->getBrain()->setIdea(2, "Hungry now ..");
	dog->getBrain()->setIdea(3, "I think I'm gunna go lie down on the couch.");
	announceIdea("dog", dog->getBrain()->getIdea(0));
	announceIdea("dog", dog->getBrain()->getIdea(1));
	announceIdea("dog", dog->getBrain()->getIdea(2));
	announceIdea("dog", dog->getBrain()->getIdea(3));
	announce("and now copyDog01 should still have the same ideas as before");
	announceIdea("copyDog01", copyDog01->getBrain()->getIdea(0));
	announceIdea("copyDog01", copyDog01->getBrain()->getIdea(1));
	announceIdea("copyDog01", copyDog01->getBrain()->getIdea(2));
	announceIdea("copyDog01", copyDog01->getBrain()->getIdea(3));
	announce("Now let's give give copyDog01 the ideas from the original dog");
	*copyDog01 = *dog;
	announceIdea("copyDog01", copyDog01->getBrain()->getIdea(0));
	announceIdea("copyDog01", copyDog01->getBrain()->getIdea(1));
	announceIdea("copyDog01", copyDog01->getBrain()->getIdea(2));
	announceIdea("copyDog01", copyDog01->getBrain()->getIdea(3));
	std::cout << "\nPress any key to continue .." << std::endl;
	system("read");
	announce("Deleting the dogs");
	delete dog;
	delete copyDog01;

	std::cout << "\nPress any key to continue .." << std::endl;
	system("read");

	return (0);
}

int	main(void)
{
	animalTesting();
	catTest();
	dogTest();
	return (0);
}
