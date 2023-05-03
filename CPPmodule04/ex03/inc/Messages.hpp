/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Messages.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:22:32 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/03 13:24:36 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MESSAGES_HPP
# define MESSAGES_HPP

# include <string>

void	announce(std::string const &str);
void	announceTestCategory(std::string const &str);
void	announceTest(std::string const &str);
void	announceConstructor(std::string const &str);
void	announceName(std::string const &n);
void	announceType(std::string const &type);
void	announceLearned(std::string const &m);
void	announceCopy(std::string const &str);
void	announceDeep(std::string const &str);
void	announceDestructor(std::string const &str);
void	bigAssLine(void);

#endif
