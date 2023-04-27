/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:13:35 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/27 12:32:07 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Cat.hpp"
 #include "Colours.hpp"
 #include <iostream>
 #include <string>

 /* Trying to get in to the habit of using return ; to immediately exit the
  * funciton. Just seems like good practice. */
 Cat::Cat(void) : Animal()
 {
     std::cout << MAG << "Cat default constructor called." << RST << std::endl;
     this->_type = "Cat";
     return ;
 }

 Cat::Cat(Cat const &src) : Animal()
 {
     std::cout << MAG << "Cat copy constructor called." << RST << std::endl;
     *this = src;
     return ;
 }

 Cat::~Cat(void)
 {
     std::cout << B_BLK << "Cat destructor called." << RST << std::endl;
     return ;
 }

 Cat &Cat::operator=(Cat const &src)
 {
     std::cout << CYN << "Cat assignment operator is now overloaded." << RST
         << std::endl;
     if (this != &src)
         this->_type = src._type;
     return (*this);
 }

 void    Cat::makeSound(void) const
 {
     std::cout << WHT << "<" << this->_type << "> " << YEL << "meooOo0Oow" 
		 << RST << std::endl;
 }
