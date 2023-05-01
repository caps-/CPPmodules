/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Messages.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:22:32 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 18:36:12 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MESSAGES_HPP
# define MESSAGES_HPP

void	announce(std::string const &str);
void	announceTest(std::string const &str);
void	announceTestType(std::string const &type);
void	announceConstructor(std::string const &str);
void	announceCopy(std::string const &str);
void	announceDeep(std::string const &str);
void	announceDestructor(std::string const &str);
void	bigAssLine(void);

#endif
