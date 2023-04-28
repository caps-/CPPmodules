/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:14:17 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/29 00:36:44 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Colours.hpp"
#include "Messages.hpp"

void	testArrays(void)
{
	//message
	announceTest("Creating Animal Arrays");

	Animal *animal[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }
	bigAssLine();

	announce("Noises!");
	for (int i = 0; animal[i]; i++)
		animal[i]->makeSound();

	announce("Deleting");
	for (int i = 0; animal[i]; i++)
		delete animal[i];
	bigAssLine();
	std::cout << std::endl;
}

int	main(void)
{
	std::cout << BBLK << BAL << RST << "\n" << std::endl;

	testArrays();

	return (0);
}
