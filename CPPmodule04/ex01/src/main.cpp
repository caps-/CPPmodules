/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:14:17 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/29 03:55:15 by pwhittin         ###   ########.fr       */
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
	announce("Copy testing");
	//copy + brain testing
	Cat	cat;
	Cat	copyCat = cat;

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
