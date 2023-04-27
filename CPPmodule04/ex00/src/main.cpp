/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:14:17 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/27 15:44:53 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Colours.hpp"
#include "MyMacros.hpp"

int	testMine01(void) //Animal Class
{
	std::cout << YEL << "[Animal from Animal class]" << std::endl;
	const Animal *animal = new Animal();
	std::cout << "Type: " << RED << animal->getType() << std::endl;
	std::cout << std::endl;
	std::cout << YEL << "[Cat from Animal parent class]" << std::endl;
	const Animal *cat = new Cat();
	std::cout << "Type: " << RED << animal->getType() << std::endl;
	std::cout << std::endl;
	std::cout << YEL << "[Dog from Animal parent class]" << std::endl;
	const Animal *dog = new Dog();
	std::cout << "Type: " << RED << animal->getType() << std::endl;
	std::cout << std::endl;

	cat->makeSound();
	dog->makeSound();
	animal->makeSound();
	std::cout << std::endl;
	delete animal;
	delete cat;
	delete dog;

	return (0);
}

int	testMine02(void) //Cat & Dog classes
{
	std::cout << YEL << "[Cat from Cat class]" << std::endl;
	const Cat *cat = new Cat();
	std::cout << "Type: " << RED << cat->getType() << std::endl;
	std::cout << std::endl;
	std::cout << YEL << "[Dog from Dog class]" << std::endl;
	const Dog *dog = new Dog();
	std::cout << "Type: " << RED << dog->getType() << std::endl;
	std::cout << std::endl;

	cat->makeSound();
	dog->makeSound();
	std::cout << std::endl;
	delete cat;
	delete dog;

	return (0);
}

int	testMine03(void)
{
	std::cout << YEL << "[Wrong Animal]" << RST << std::endl;
	const WrongAnimal	*wrongAnimal = new WrongAnimal();
	std::cout << "Type: " << RED << wrongAnimal->getType() << std::endl;
	std::cout << std::endl;
	std::cout << YEL << "[WrongCat from WrongAnimal parent class]" << std::endl;
	const WrongAnimal	*wrongAnimalCat = new WrongCat();
	std::cout << "Type: " << RED << wrongAnimalCat->getType() << std::endl;
	std::cout << std::endl;
	std::cout << YEL << "[WrongCat from WrongACat parent class]" << std::endl;
	const WrongAnimal	*wrongCat = new WrongCat();
	std::cout << "Type: " << RED << wrongCat->getType() << std::endl;
	std::cout << std::endl;

	wrongAnimal->makeSound();
	wrongAnimalCat->makeSound();
	wrongCat->makeSound();
	std::cout << std::endl;
	delete wrongAnimal;
	delete wrongAnimalCat;
	delete wrongCat;

	return (0);
}


int	test42(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	return 0;
}

int	main(void)
{
	std::cout << B_GRN << test42msg << RST << std::endl;
	test42(); //test from the pdf
	std::cout << B_GRN << test01msg << RST << std::endl;
	testMine01(); //my test
	std::cout << B_GRN << test02msg << RST << std::endl;
	testMine02(); //amimal class
	std::cout << B_GRN << test03msg << RST << std::endl;
	testMine03(); //cat class

	return (0);
}
