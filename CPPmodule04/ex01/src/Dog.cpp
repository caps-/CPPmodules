/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:21:22 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/29 00:34:19 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Dog.hpp"
 #include "Colours.hpp"
 #include <iostream>
 #include <string>

 /* Trying to get in to the habit of using return ; to immediately exit the
  * funciton. Just seems like good practice. */
 Dog::Dog(void) : Animal()
 {
     std::cout << CYN << "Dog default constructor has been called." << RST
		 << std::endl;
     this->_type = "Dog";
     return ;
 }

 Dog::Dog(Dog const &src) : Animal()
 {
     std::cout << CYN << "Dog copy constructor has been called." << RST
		 << std::endl;
     *this = src;
     return ;
 }

 Dog::~Dog(void)
 {
     std::cout << BBLK << "Dog destructor has been called." << RST
		 << std::endl;
     return ;
 }

 Dog &Dog::operator=(Dog const &src)
 {
     std::cout << CYN << "Dog assignment operator is now overloaded." << RST
         << std::endl;
     if (this != &src)
         this->_type = src._type;
     return (*this);
 }

 void    Dog::makeSound(void) const
 {
     std::cout << YEL << "<" << this->_type << "> " << WHT << "arf! w00f!" 
		 << RST << std::endl;
	 return ;
 }
