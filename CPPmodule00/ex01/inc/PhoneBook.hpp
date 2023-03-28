/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:21:29 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/20 16:18:39 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PHONEBOOK_HPP
# define	PHONEBOOK_HPP

# include <unistd.h>
# include <iostream>
# include <cstdlib>
# include <string>
# include <limits>

/* Colours for the output. Not going to use them all but I've put them here 
 * any way just in case. */
# define RST   "\033[0m" //reset colour
# define BLK   "\033[30m"
# define RED   "\033[31m"
# define GRN   "\033[32m"
# define YEL   "\033[33m"
# define BLU   "\033[34m"
# define MAG   "\033[35m"
# define CYN   "\033[36m"
# define WHT   "\033[37m"
# define B_BLK "\033[1m\033[30m" //bold colours
# define b_RED "\033[1m\033[31m"
# define b_GRN "\033[1m\033[32m"
# define b_YEL "\033[1m\033[33m"
# define b_BLU "\033[1m\033[34m"
# define b_MAG "\033[1m\033[35m"
# define b_CYN "\033[1m\033[36m"
# define b_WHT "\033[1m\033[37m"

/* Maximum number of contacts the program can store */
# define MAX_CONTACTS 8

/* Messages and shit as macros to save space in the code */
# define ERR_SECRT	"You must include a secret. Don't worry, I won't tell ;)"
# define ERR_IDNUM	"Please enter a number between 1 and 8: "
# define LINES01	".----------.-----------.-----------.-----------."
# define LINES02	"|     INDEX| FIRST NAME|  LAST NAME|   NICKNAME|"
# define LINES03	"|----------|-----------|-----------|-----------|"
# define LINES04	"'----------'-----------'-----------'-----------'"
# define LINES05	"-------------------------------------------"

/* Contact class */
class Contact
{
	private:
		std::string	firstName;
		std::string lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkSecret;
	
	public:
		Contact(); //constructor
		~Contact(); //destructor
		void		setFirstName(void); //setters
		void		setLastName(void);
		void		setNickName(void);
		void		setPhoneNumber(void);
		void		setDarkSecret(void);
		std::string	getFirstName(void); //getters
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkSecret(void);
		std::string	printContact(std::string);
};

/* Phonebook class */
class	PhoneBook
{
	private:
		Contact	contact[MAX_CONTACTS];
		int		index;
		int		numberOfContacts;
	
	public:
		PhoneBook(); //constructor
		~PhoneBook(); //destructor
		void	addContact(void);
		void	displayContacts(void);
		void	showInfo(int index);
};

#endif
