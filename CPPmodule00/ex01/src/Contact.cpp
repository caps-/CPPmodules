/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:45:20 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/08 21:26:38 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(){};
Contact::~Contact(){};

/* Setters */
void	Contact::setFirstName(void)
{
	std::cout << MAG << "First Name: " << RST;
	std::getline(std::cin, firstName);
	while (firstName.empty())
	{
		std::cout << RED <<  "Please enter a first name: " << RST;
		std::getline(std::cin, firstName);
	}
};

void	Contact::setLastName(void)
{
	std::cout << MAG << "Last Name: " << RST;
	std::getline(std::cin, lastName);
	while (lastName.empty())
	{
		std::cout << RED << "Please enter a last name: " << RST;
		std::getline(std::cin, lastName);
	}
};

void	Contact::setNickName(void)
{
	std::cout << MAG << "Nickname: " << RST;
	std::getline(std::cin, nickName);
	while (lastName.empty())
	{
		std::cout << RED "Please enter a nickname: " << RST;
		std::getline(std::cin, nickName);
	}
};

void	Contact::setPhoneNumber(void)
{
	std::cout << MAG << "Phone Number: " << RST;
	std::getline(std::cin, phoneNumber);
	while (phoneNumber.empty())
	{
		std::cout << RED "Please enter a phone number: " << RST;
		std::getline(std::cin, phoneNumber);
	}
}

void	Contact::setDarkSecret(void)
{
	std::cout << MAG << "Dark Secret: " << RST;
	std::getline(std::cin, darkSecret);
	while (darkSecret.empty())
	{
		std::cout << RED "Please enter a dark secret: " << RST;
		std::getline(std::cin, darkSecret);
	}
};

/* And getters */
std::string	Contact::getFirstName(void)
{
	return(this->firstName);		
};

std::string	Contact::getLastName(void)
{
	return(this->lastName);
}

std::string Contact::getNickName(void)
{
	return(this->nickName);
}

std::string	Contact::getPhoneNumber(void)
{
	return(this->phoneNumber);
}

std::string	Contact::getDarkSecret(void)
{
	return(this->darkSecret);
}

/* Format stuff. Fills the rest of the table with blank spaces if the string is 
 * less than 10 characters, and truncates strings longer than 10 characters with
 * a . symbol. */
std::string	Contact::printContact(std::string str)
{
	int	len;

	len = 10 - str.length();
	if (len > 0)
	{
		for (int i = 0; i < len; i++)
			str.insert(0, " ");
	}
	else if (len < 0)
	{
		str[9] = '.';
		str = str.substr(0, 10);
	}
	return (str);
}
