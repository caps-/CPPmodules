/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:51:05 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/14 16:21:26 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	ft_menu(void)
{
	std::cout << std::endl;
	std::cout << YEL;
	std::cout << "+---------------[PHONEBOOK]---------------+" << std::endl;
	std::cout << "|                                         |" << std::endl;
    std::cout << "|                  ADD                    |" << std::endl;
    std::cout << "|                  SEARCH                 |" << std::endl;
    std::cout << "|                  EXIT                   |" << std::endl;
	std::cout << "|                                         |" << std::endl;
    std::cout << "+-----------------------------------------+" << std::endl;
	std::cout << GRN << "Please type one of the above: ";
	std::cout << RST;
}

/* Honestly this code should be pretty self explanatory. The most going on here 
 * is the while loop that's handling the input for choosing a user ID.
 *
 * The while condition includes numbers less than 1 greater than 9, but it also
 * uses cin.fail() to make sure the last cin actually worked. If it didn't work
 * then fail() will actually pass an error flag. So that's cool, we print an
 * error message and then we want to take another input, but we gotta do some
 * shit first. We run the clear() function on cin in order to get rid of the
 * error flag we got from fail(), and then we have the next monstrosity of a
 * line which basically strips the input buffer completely. If we don't do that
 * it'll actually pass the leftover '\n' from before (cin reads UP TO the '\n')
 * to the next cin >>. This is Not Good, mostly because the next cin will think
 * the user has just hit enter and ..fuck, I can't even remember what happened
 * now but it just kinda didn't display the user info and went back to the main
 * menu bit. I know that was a bit of a shit description, so I'd suggest just
 * commenting out the line and then seeing what happens.  */
int	main(void)
{
	PhoneBook	phoneBook;
	std::string	input;
	int			id;

	system("clear");
	while(1)
	{
//		system("clear");
		ft_menu();
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			phoneBook.addContact();
		else if (input.compare("SEARCH") == 0)
		{
			phoneBook.displayContacts();
			std::cout << GRN << "Enter index number for more info: " << RST;
			std::cin >> id;
			while (std::cin.fail() || id < 1 || id > 8)
			{
					std::cout << RED << ERR_IDNUM << RST;
					std::cin.clear(); //clear whatever the input was
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
							'\n'); //completely ignores input buffer up to \n
					std::cin >> id;
			}
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			phoneBook.showInfo(id);
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << MAG << "\nBye!\n" << RST;
			std::cout << B_BLK << LINES05 << RST << std::endl;
			return (0);
		}
		else
			system("clear");
	}
}
