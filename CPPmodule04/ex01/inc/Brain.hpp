/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:52:19 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 12:26:49 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain(void);
		Brain(Brain const &src);
		~Brain(void);

		Brain &operator=(Brain const &src);

		std::string	const	&getIdea(int i) const;
		void				setIdea(int i, std::string const &idea);
};

#endif
