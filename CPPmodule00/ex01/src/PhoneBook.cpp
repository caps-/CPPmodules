/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:29:52 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/20 16:24:16 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/* Phoneboko constructor */
PhoneBook::PhoneBook()
{
	index = 0;
	numberOfContacts = 0;
	return ;
};

/* Phonebook destructor */
PhoneBook::~PhoneBook(){};

/* Phonebook functions. */
void	PhoneBook::addContact(void)
{
	if (index >= MAX_CONTACTS)
	{
		index = 0;
	}
	std::cout << std::endl;
	contact[index].setFirstName();
	contact[index].setLastName();
	contact[index].setNickName();
	contact[index].setPhoneNumber();
	contact[index].setDarkSecret();
	index++;
	if (numberOfContacts < 8)
		numberOfContacts++;
	std::cout << GRN << "Contact added!" << RST << std::endl;
	std::cout << " " << std::endl;
	sleep(1);
	system("clear");
};

void	PhoneBook::displayContacts(void)
{
	system("clear");
	std::cout << std::endl << YEL << LINES01 << std::endl;
	std::cout << LINES02 << std::endl;
	std::cout << LINES03 << std::endl;
	for (int i = 0; i < MAX_CONTACTS; i++)
	{
		std::cout << "|         " << i + 1;
		std::cout << "| " << contact[i].printContact(contact[i].getFirstName());
		std::cout << "| " << contact[i].printContact(contact[i].getLastName());
		std::cout << "| " << contact[i].printContact(contact[i].getNickName())
		<< "|";
		std::cout << std::endl;
	}
	std::cout << LINES04 << RST << std::endl;
}

void	PhoneBook::showInfo(int index)
{
	system("clear");
	std::cout << B_BLK << LINES05 << RST;
	std::cout << std::endl << MAG << "[First Name  ] " << RST
		<< contact[index - 1].getFirstName() << std::endl;
	std::cout << MAG << "[Last Name   ] " << RST
		<< contact[index - 1].getLastName() << std::endl;
	std::cout << MAG << "[Nickname    ] " << RST
		<< contact[index - 1].getNickName() << std::endl;
	std::cout << MAG << "[Phone Number] " << RST
		<< contact[index - 1].getPhoneNumber() << std::endl;
	std::cout << MAG << "[Dark Secret ] " << RST
		<< contact[index - 1].getDarkSecret() << std::endl;
	std::cout << std::endl;
	std::cout << "Hit Enter to Continue ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	system("clear");
}
