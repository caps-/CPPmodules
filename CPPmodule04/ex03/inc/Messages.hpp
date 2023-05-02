/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Messages.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:22:32 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 18:38:02 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MESSAGES_HPP
# define MESSAGES_HPP

# include <string>

void	announce(std::string const &str);
void	announceTest(std::string const &str);
void	announceConstructor(std::string const &str);
void	announceType(std::string const &type);
void	announceCopy(std::string const &str);
void	announceDeep(std::string const &str);
void	announceDestructor(std::string const &str);
void	bigAssLine(void);

#endif
