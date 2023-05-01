/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:55:54 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 15:21:30 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

class	Aanimal
{
	protected:
		std::string	_type;

	public:
		Aanimal(void);
		Aanimal(Aanimal const &src);
		Aanimal(std::string const &type);
		virtual ~Aanimal(void);

		Aanimal	&operator=(Aanimal const &src);

		std::string const	&getType(void) const;
		virtual void		makeSound(void) const;
};

#endif
